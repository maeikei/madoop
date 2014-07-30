#include "SystemCommand.hpp"
using namespace MadoopInternal;


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>

#include <boost/foreach.hpp>
#include <boost/optional.hpp>
#include <boost/log/trivial.hpp>

/** @brief constructor
*   @param cmd command to run.
*/
SystemCommand::SystemCommand(const string &cmd)
:_cmd(cmd)
{
}


/** @brief get run result
*   @param None.
*   @return run result.
*/
string SystemCommand::result(void)
{
	string ret = "ERROR";
	FILE* pipe = popen("ifconfig | grep inet6 | grep Scope:Global", "r");
	if (nullptr == pipe) 
	{
		return ret;
	}
	char buffer[256];
	if(nullptr != fgets(buffer, sizeof(buffer), pipe))
	{
		ret = buffer;
	}
	pclose(pipe);
	return ret;
}

