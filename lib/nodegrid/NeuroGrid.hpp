#ifndef __NEURO_GRID_HPP__
#define __NEURO_GRID_HPP__
#include <string>
#include <map>
using namespace std;


namespace MadoopInternal
{
	class NeuroGrid;
	class NeuroGrid
	{
	public:
		/** @brief constructor
		*   @param uuid id.
		*   @return None.
		*/
		NeuroGrid(const string &uuid);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		NeuroGrid();
	
		
	public:
		const int iConstNearNodeMax = 256;
		const int iConstMiddleNodeMax = 128;
		const int iConstFarNodeMax = 64;
	private:
		map<string,NeuroGrid*> _near;
		map<string,NeuroGrid*> _midlle;
		map<string,NeuroGrid*> _far;
	};
}
#endif // __NEURO_GRID_HPP__

