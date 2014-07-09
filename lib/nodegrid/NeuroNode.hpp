#ifndef __NEURO_NODE_HPP__
#define __NEURO_NODE_HPP__
#include <string>
#include <map>
using namespace std;


namespace MadoopInternal
{
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
	private:
		const string _uuid;
		const string _host;
		const string _port;
	};
}
#endif // __NEURO_NODE_HPP__

