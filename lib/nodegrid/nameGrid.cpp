#include "nameGrid.hpp"
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
NameGrid::NameGrid()
{
}

/** @brief get union object of grid.
*   @param None
*   @return object
*/
NameGrid &NameGrid::getInstance(void)
{
	static NameGrid instance;
	return instance;
}

