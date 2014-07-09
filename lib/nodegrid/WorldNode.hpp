#ifndef __WORLD_NODE_ENV_HPP__
#define __WORLD_NODE_ENV_HPP__
#include <string>
#include <vector>
using namespace std;


namespace MadoopInternal
{
	class WorldNode
	{
	public:
		/** @brief constructor
		*   @param host hostname or ip address.
		*   @return None.
		*/
		WorldNode(const string &host);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		WorldNode();
	};
}
#endif // __WORLD_NODE_ENV_HPP__
