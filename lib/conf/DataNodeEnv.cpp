#include "DataNodeEnv.hpp"
#include "DataGrid.hpp"
using namespace MadoopInternal;


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>

#include <boost/foreach.hpp>
#include <boost/optional.hpp>
#include <boost/log/trivial.hpp>

/** @brief constructor
*   @param argv0 arvv[0].
*/
DataNodeEnv::DataNodeEnv(const string &argv0)
:CommonEnv(argv0)
{
}

/** @brief parse actions
*   @param None.
*   @return true success,false fail.
*/
bool DataNodeEnv::setup(void)
{
	if( false == CommonEnv::setup())
	{
		return false;
	}
	_confRoot += "/datanode";
	
	
	BOOST_LOG_TRIVIAL(trace) << _confRoot << endl;
	try
	{
		pt::ptree pt;
		readJson("world.conf.json",pt);
		
		BOOST_FOREACH (const pt::ptree::value_type& v, pt.get_child("ipv6.entries"))
		{
			BOOST_LOG_TRIVIAL(trace) << __LINE__ << v.second.data() << endl;
			_worldhosts.push_back(v.second.data());
	    }
	}
	catch(std::exception const& e)
	{
		BOOST_LOG_TRIVIAL(fatal) << e.what() << endl;
	}
	if( false == CommonEnv::setupWorldGrid())
	{
		return false;
	}
	DataGrid &grid = DataGrid::getInstance();
	return true;
}

