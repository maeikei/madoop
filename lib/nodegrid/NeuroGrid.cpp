#include "NeuroGrid.hpp"
using namespace MadoopInternal;


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>
#include <string>
#include <functional>

#include <boost/log/trivial.hpp>


#include <boost/uuid/uuid.hpp>            // uuid class
#include <boost/uuid/uuid_generators.hpp> // generators
#include <boost/uuid/uuid_io.hpp>         // streaming operators etc.
#include <boost/uuid/sha1.hpp>
#include <boost/array.hpp>
typedef boost::array<boost::uint8_t,32> hash_data_t;
static hash_data_t get_sha1_hash( const void *data, const std::size_t byte_count )
{
	boost::uuids::detail::sha1 sha1;
	sha1.process_bytes( data, byte_count );
	unsigned int digest[5];
	sha1.get_digest( digest );
	const boost::uint8_t *p_digest = reinterpret_cast<const boost::uint8_t *>( digest );
	hash_data_t hash_data;
	for( int i = 0; i < 5; ++i )
	{
		hash_data[ i * 4 ]     = p_digest[ i * 4 + 3 ];
		hash_data[ i * 4 + 1 ] = p_digest[ i * 4 + 2 ];
		hash_data[ i * 4 + 2 ] = p_digest[ i * 4 + 1 ];
		hash_data[ i * 4 + 3 ] = p_digest[ i * 4 ];
	}
	return hash_data;
}

static const string genUAddress(void)
{
	string uuidStr = boost::uuids::to_string(boost::uuids::random_generator()());
	hash_data_t hash = get_sha1_hash(uuidStr.c_str(),uuidStr.size());
	string ret;
	for(auto &x : hash) {
		char buf[3]={0};
		std::sprintf(buf, "%02x", x);
		ret += buf;
	}
	return ret;
}



#define TRACE_VAR(x) BOOST_LOG_TRIVIAL(trace) << __func__  << ": " << #x << " = <" << x << ">" << endl;

/** @brief constructor
*   @param None.
*   @return None.
*/
NeuroGrid::NeuroGrid()
:_uAdd(genUAddress())
,_self(nullptr)
,_near{}
,_far{}
{
	TRACE_VAR(_uAdd);
}


/** @brief get union object of grid.
*   @param None
*   @return object
*/
NeuroGrid &NeuroGrid::getInstance(void)
{
	static NeuroGrid instance;
	return instance;
}

/** @brief build neuro grid.
*   @param None.
*   @return true success,false failure.
*/
bool NeuroGrid::build(void)
{
	return true;
}

