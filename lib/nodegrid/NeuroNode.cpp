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
NeuroNode::NeuroNode(const string &uAdd)
:_uAdd(uAdd)
,_host()
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
	_host = readIPv6();
	_port = port;
}

