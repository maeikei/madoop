#include "commonEnv.hpp"
using namespace MadoopInternal;

#include <iostream>
#include <cstdlib>
#include <cstdio>


#include <boost/log/trivial.hpp>


/** @brief constructor
*   @param argv0 arvv[0].
*/
CommonEnv::CommonEnv(const string &argv0)
:_argv0(argv0)
,_confRoot()
,_namenodes()
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
	BOOST_LOG_TRIVIAL(trace) << program << endl;
	_confRoot = program.parent_path().parent_path();
	_confRoot += "/conf";
	BOOST_LOG_TRIVIAL(trace) << _confRoot << endl;
	return true;
}

/** @brief read json confiure.
*   @param None.
*   @return true success,false fail.
*/
void CommonEnv::readJson(const string &path,pt::ptree &pt)
{
	_confRoot += "/" + path;
	BOOST_LOG_TRIVIAL(trace) << _confRoot << endl;
	pt::read_json(_confRoot.string(), pt);
}


