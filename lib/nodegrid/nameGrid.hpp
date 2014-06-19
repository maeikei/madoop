#ifndef __NAME_GRID_ENV_HPP__
#define __NAME_GRID_ENV_HPP__
#include <string>
#include <vector>
using namespace std;


namespace MadoopInternal
{
	class NameGrid
	{
	public:
	    /** @brief get union object of grid.
	    *   @param None
	    *   @return object
	    */
	    static NameGrid &getInstance(void);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		NameGrid();
	};
}
#endif // __NAME_GRID_ENV_HPP__
