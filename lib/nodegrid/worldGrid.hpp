#ifndef __WORLD_GRID_ENV_HPP__
#define __WORLD_GRID_ENV_HPP__
#include <string>
#include <vector>
using namespace std;


namespace MadoopInternal
{
	class WorldGrid
	{
	public:
	    /** @brief get union object of grid.
	    *   @param None
	    *   @return object
	    */
	    static WorldGrid &getInstance(void);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		WorldGrid();
	};
}
#endif // __WORLD_GRID_ENV_HPP__
