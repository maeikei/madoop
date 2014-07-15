#ifndef __NEURO_GRID_HPP__
#define __NEURO_GRID_HPP__
#include <string>
#include <map>
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
	    /** @brief get union object of grid.
	    *   @param None
	    *   @return object
	    */
	    static NeuroGrid &getInstance(void);

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
		const string _uAdd;
		const NeuroNodePtr _self;
		map<string,NeuroNodePtr> _near;
		map<string,NeuroNodePtr> _far;
	};
}
#endif // __NEURO_GRID_HPP__

