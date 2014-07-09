#ifndef __NEURO_NODE_HPP__
#define __NEURO_NODE_HPP__
#include <string>
#include <map>
using namespace std;


namespace MadoopInternal
{
	class NeuroNode;
	class NeuroNode
	{
	public:
		/** @brief constructor
		*   @param uuid id.
		*   @return None.
		*/
		NeuroNode(const string &uuid);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		NeuroNode();
	
		
	public:
		const int iConstNearNodeMax = 256;
		const int iConstMiddleNodeMax = 128;
		const int iConstFarNodeMax = 64;
	private:
		map<string,NeuroNode*> _near;
		map<string,NeuroNode*> _midlle;
		map<string,NeuroNode*> _far;
	};
}
#endif // __NEURO_NODE_HPP__

