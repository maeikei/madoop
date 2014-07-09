#include "DataGrid.hpp"
#include "NeuroGrid.hpp"
using namespace MadoopInternal;


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>




/** @brief constructor
*   @param None.
*   @return None.
*/
DataGrid::DataGrid()
:NeuroGrid()
{
}


/** @brief get union object of grid.
*   @param None
*   @return object
*/
DataGrid &DataGrid::getInstance(void)
{
	static DataGrid instance;
	return instance;
}
