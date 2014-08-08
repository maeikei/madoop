#include "SystemCommand.hpp"
using namespace MadoopInternal;

#include "MadoopDebug.hpp"

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
	TRACE_VAR(_cmd);
}


/** @brief get run result
*   @param None.
*   @return run result.
*/
string SystemCommand::result(void)
{
	string ret = "";
	FILE* pipe = popen(_cmd.c_str(), "r");
	if (nullptr == pipe) 
	{
		return ret;
	}
	char buffer[256];
	while(nullptr != fgets(buffer, sizeof(buffer), pipe))
	{
		ret += buffer;
	}
	pclose(pipe);
	TRACE_VAR(ret);
	return ret;
}

