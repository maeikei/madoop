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

/** @brief add host to world grid.
*   @param host hostname or ip address of a entry server.
*   @return object
*/
void WorldGrid::addHost(const string &host)
{
	
}

/** @brief build world grid.
*   @param None.
*   @return true success,false failure.
*/
bool WorldGrid::build(void)
{
	return true;
}


