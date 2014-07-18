#ifndef __NEURO_GRID_HPP__
#define __NEURO_GRID_HPP__
#include <string>
#include <vector>
#include <memory>
using namespace std;


namespace MadoopInternal
{
	class CommonEnv;
	class NeuroNode;
	class NeuroGrid;
	
	typedef shared_ptr<NeuroNode> NeuroNodePtr;
	class NeuroGrid
	{
	public:
		/** @brief constructor
		*   @param ptr.
		*   @return None.
		*/
		NeuroGrid(NeuroNode* ptr);
		
		/** @brief build world grid.
	    *   @param env .
	    *   @return true success,false failure.
	    */
	    bool build(const CommonEnv &env);
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
		const NeuroNodePtr _self;
		vector<NeuroNodePtr> _near;
		vector<NeuroNodePtr> _far;
	};
}
#endif // __NEURO_GRID_HPP__

