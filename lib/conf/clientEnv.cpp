#include "clientEnv.hpp"
using namespace MadoopInternal;


#include <iostream>
#include <cstdlib>
#include <cstdio>

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
	return true;
}
