#ifndef __NEURO_GRID_HPP__
#define __NEURO_GRID_HPP__
#include <string>
#include <map>
using namespace std;


namespace MadoopInternal
{
	class NeuroNode;
	class NeuroGrid;
	class NeuroGrid
	{
	public:
	    /** @brief get union object of grid.
	    *   @param None
	    *   @return object
	    */
	    static NeuroGrid &getInstance(void);

		/** @brief build neuro grid.
	    *   @param None.
	    *   @return true success,false failure.
	    */
	    bool build(void);
	protected:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		NeuroGrid();
		
	public:
		const int iConstNearNodeMax = 256;
		const int iConstFarNodeMax = 64;
	private:
		const string _uAdd;
		const NeuroNode *_self;
		map<string,NeuroNode*> _near;
		map<string,NeuroNode*> _far;
	};
}
#endif // __NEURO_GRID_HPP__

