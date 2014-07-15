#include "CommonEnv.hpp"
#include "WorldGrid.hpp"
using namespace MadoopInternal;

#include "MadoopDebug.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>


#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup.hpp>
namespace logging = boost::log;

#include <boost/foreach.hpp>
#include <boost/optional.hpp>

/** @brief constructor
*   @param argv0 arvv[0].
*/
CommonEnv::CommonEnv(const string &argv0)
:_argv0(argv0)
,_confRoot()
,_worldhosts()
{
	logging::add_common_attributes();
#ifdef _DEBUG
// do nothing
#else
	logging::core::get()->set_filter(
     	logging::trivial::severity >= logging::trivial::trace
     );
#endif

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
	TRACE_VAR(program);
	_confRoot = program.parent_path().parent_path();
	_confRoot += "/conf";
	TRACE_VAR(_confRoot);

	return true;
}

/** @brief set up world grid
*   @param None.
*   @return true success,false fail.
*/
bool CommonEnv::setupWorldGrid(void)
{
	WorldGrid &world = WorldGrid::getInstance();
	for (const auto &node : _worldhosts)
	{
		world.addHost(node);
		BOOST_LOG_TRIVIAL(info) << "Contract to this servers for global information " << node << endl;
	}
	return true;
}


/** @brief read json confiure.
*   @param None.
*   @return true success,false fail.
*/
void CommonEnv::readJson(const string &path,pt::ptree &pt)
{
	auto fsPath =  _confRoot;
	fsPath += "/" + path;
	TRACE_VAR(fsPath);
	pt::read_json(fsPath.string(), pt);
}

/** @brief read configures
*   @param None.
*   @return true success,false fail.
*/
bool CommonEnv::readConf(void)
{
	TRACE_VAR(_confRoot);
	try
	{
		pt::ptree pt;
		readJson("world.conf.json",pt);
		
		BOOST_FOREACH (const pt::ptree::value_type& v, pt.get_child("ipv6.entries"))
		{
			TRACE_VAR(v.second.data());
			_worldhosts.push_back(v.second.data());
	    }
	}
	catch(std::exception const& e)
	{
		BOOST_LOG_TRIVIAL(fatal) << e.what() << endl;
		return false;
	}
	try
	{
		pt::ptree pt;
		readJson("neuro.conf.json",pt);
		
		_port = pt.get<int>("port");
		TRACE_VAR(_port);
	}
	catch(std::exception const& e)
	{
		FATAL_VAR(e.what());
		return false;
	}
	return true;
}

