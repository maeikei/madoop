#include "DataNodeEnv.hpp"
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
	if( false == CommonEnv::readConf())
	{
		return false;
	}
	
	if( false == this->readConf())
	{
		return false;
	}
	
	if( false == CommonEnv::setupWorldGrid())
	{
		return false;
	}
	return true;
}

