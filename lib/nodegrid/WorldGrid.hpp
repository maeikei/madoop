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

		/** @brief add host to world grid.
	    *   @param host hostname or ip address of a entry server.
	    *   @return object
	    */
	    void addHost(const string &host);

		/** @brief build world grid.
	    *   @param None.
	    *   @return true success,false failure.
	    */
	    bool build(void);
		
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		WorldGrid();
	};
}
#endif // __WORLD_GRID_ENV_HPP__
