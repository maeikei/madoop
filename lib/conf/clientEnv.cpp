#include "clientEnv.hpp"
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
ClientEnv::ClientEnv(const string &argv0)
:CommonEnv(argv0)
{
}

/** @brief parse actions
*   @param None.
*   @return true success,false fail.
*/
bool ClientEnv::setup(void)
{
	if( false == CommonEnv::setup())
	{
		return false;
	}
	_confRoot += "/client";
	
	
	BOOST_LOG_TRIVIAL(trace) << _confRoot << endl;
	try
	{
		pt::ptree pt;
		readJson("server.client.conf.json",pt);
		
		BOOST_FOREACH (const pt::ptree::value_type& v, pt.get_child("rootnodes"))
		{
			BOOST_LOG_TRIVIAL(trace) << v.second.data() << endl;
			_worldnodes.push_back(v.second.data());
	    }
	}
	catch(std::exception const& e)
	{
		BOOST_LOG_TRIVIAL(fatal) << e.what() << endl;
	}
	
	for (const auto &node : _worldnodes)
	{
		BOOST_LOG_TRIVIAL(info) << "Contract to this servers for global information " << node << endl;
	}
	
	
	return true;
}

