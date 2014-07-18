#include "NeuroGrid.hpp"
#include "NeuroNode.hpp"
#include "CommonEnv.hpp"
using namespace MadoopInternal;

#include "MadoopDebug.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>
#include <string>
#include <functional>







/** @brief constructor
*   @param None.
*   @return None.
*/
NeuroGrid::NeuroGrid()
:_self(new NeuroNode())
,_near{}
,_far{}
{
}


/** @brief get union object of grid.
*   @param None
*   @return object
*/
NeuroGrid &NeuroGrid::getInstance(void)
{
	static NeuroGrid instance;
	return instance;
}

/** @brief build world grid.
*   @param env .
*   @return true success,false failure.
*/
bool NeuroGrid::build(const CommonEnv &env)
{
	_self->build(env.port());
	return true;
}

