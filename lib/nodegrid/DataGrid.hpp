#ifndef __DATA_GRID_HPP__
#define __DATA_GRID_HPP__
#include <string>
#include <map>
using namespace std;

#include "NeuroGrid.hpp"


namespace MadoopInternal
{
	class DataGrid : public NeuroGrid
	{
	public:
	    /** @brief get union object of grid.
	    *   @param None
	    *   @return object
	    */
	    static DataGrid &getInstance(void);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		DataGrid();
		
	public:
	private:
	};
}
#endif // __DATA_GRID_HPP__

