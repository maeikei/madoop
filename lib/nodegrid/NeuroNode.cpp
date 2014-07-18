#include "NeuroNode.hpp"
using namespace MadoopInternal;

#include "MadoopDebug.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>
#include <list>

#include <boost/foreach.hpp>
#include <boost/optional.hpp>
#include <boost/log/trivial.hpp>

#include <boost/regex.hpp>


#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.
#include <boost/uuid/sha1.hpp>
#include <boost/array.hpp>
typedef boost::array<boost::uint8_t,32> hashData_t;


/** @brief get a hash code.
*   @param None.
*   @return ipv6 address.
*/
static hashData_t getShaHash( const void *data, const std::size_t byte_count )
{
	boost::uuids::detail::sha1 sha1;
	sha1.process_bytes( data, byte_count );
	unsigned int digest[5];
	sha1.get_digest( digest );
	const boost::uint8_t *p_digest = reinterpret_cast<const boost::uint8_t *>( digest );
	hashData_t hash_data;
	for( int i = 0; i < 5; ++i )
	{
		hash_data[ i * 4 ]     = p_digest[ i * 4 + 3 ];
		hash_data[ i * 4 + 1 ] = p_digest[ i * 4 + 2 ];
		hash_data[ i * 4 + 2 ] = p_digest[ i * 4 + 1 ];
		hash_data[ i * 4 + 3 ] = p_digest[ i * 4 ];
	}
	return hash_data;
}

/** @brief generate a new address for self node.
*   @param None.
*   @return ipv6 address.
*/
static const string genUAddress(void)
{
	string uuidStr = boost::uuids::to_string(boost::uuids::random_generator()());
	hashData_t hash = getShaHash(uuidStr.c_str(),uuidStr.size());
	string ret("");
	for(auto &x : hash) {
		char buf[3]={0};
		std::sprintf(buf, "%02x", x);
		ret += buf;
	}
	return ret;
}



/** @brief read ipv6 of address
*   @param None.
*   @return ipv6 address.
*/
static string readIPv6(void)
{
	string address = "";
	FILE* pipe = popen("ifconfig | grep inet6 | grep Scope:Global", "r");
	if (NULL == pipe) 
	{
		return "ERROR";
	}
	char buffer[256];
	if(NULL != fgets(buffer, sizeof(buffer), pipe))
	{
		address = buffer;
	}
	{
		boost::regex  reg( "/64 Scope:Global" );
		address = boost::regex_replace(address,reg,"", boost::format_all);
	}
	{
		boost::regex  reg( "inet6 addr:" );
		address = boost::regex_replace(address,reg,"", boost::format_all);
	}
	{
		boost::regex  reg( " " );
		address = boost::regex_replace(address,reg,"", boost::format_all);
	}
	{
		boost::regex  reg( "\n" );
		address = boost::regex_replace(address,reg,"", boost::format_all);
	}
	pclose(pipe);
	return address;
}

/** @brief constructor of self host
*   @param uniqued address.
*   @return None.
*/
NeuroNode::NeuroNode(void)
:_uAdd(genUAddress())
,_host(readIPv6())
,_port()
{
	TRACE_VAR(_uAdd);
	TRACE_VAR(_host);
	TRACE_VAR(_port);
}

/** @brief constructor of remote host
*   @param uniqued address.
*   @return None.
*/
NeuroNode::NeuroNode(const string &uAdd,const string &jconf)
:_uAdd(uAdd)
,_host()
,_port()
{
	TRACE_VAR(_uAdd);
	TRACE_VAR(_host);
	TRACE_VAR(_port);
}

/** @brief build 
*   @param port number.
*   @return None.
*/
void NeuroNode::build(int port)
{
	_port = port;
}

