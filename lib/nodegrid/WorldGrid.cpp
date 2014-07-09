#include "WorldGrid.hpp"
using namespace MadoopInternal;


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>

#include <boost/foreach.hpp>
#include <boost/optional.hpp>
#include <boost/log/trivial.hpp>

/** @brief constructor
*   @param None.
*   @return None.
*/
WorldGrid::WorldGrid()
{
}


/** @brief get union object of grid.
*   @param None
*   @return object
*/
WorldGrid &WorldGrid::getInstance(void)
{
	static WorldGrid instance;
	return instance;
}

