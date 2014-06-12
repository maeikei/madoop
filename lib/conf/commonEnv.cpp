#include "commonEnv.hpp"
using namespace MadoopInternal;

#include <iostream>
#include <cstdlib>
#include <cstdio>

/** @brief constructor
*   @param argv0 arvv[0].
*/
CommonEnv::CommonEnv(const string &argv0)
:_argv0(argv0)
{
}

/** @brief parse actions
*   @param None.
*   @return true success,false fail.
*/
bool CommonEnv::setup(void)
{
	fs::path program(_argv0);
	if(false == program.has_parent_path())
	{
		string cmd("which ");
		cmd += _argv0;
		FILE* pipe = popen(cmd.c_str(), "r");
		if (!pipe)
		{
			return false;
		}
		char buffer[256];
		std::string result = "";
		while(!feof(pipe))
		{
			if(fgets(buffer, sizeof(buffer), pipe) != NULL)
			{
    			result += buffer;
			}
		}
		fs::path which(result);
		program = which;
		pclose(pipe);
	}
	else if(false == program.is_absolute())
	{
		program = fs::current_path();
		program += "/";
		program += _argv0;
	}
	else
	{
		/// to be test in many system.
	}
	cout << program << endl;
	fs::path confpath;
	confpath = program.parent_path().parent_path();
	confpath += "/conf";
	cout << confpath << endl;
	return true;
}
