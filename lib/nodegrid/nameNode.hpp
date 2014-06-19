#ifndef __NAME_NODE_ENV_HPP__
#define __NAME_NODE_ENV_HPP__
#include <string>
#include <vector>
using namespace std;


namespace MadoopInternal
{
	class NameNode
	{
	public:
		/** @brief constructor
		*   @param host hostname or ip address.
		*   @return None.
		*/
		NameNode(const string &host);
	private:
		/** @brief constructor
		*   @param None.
		*   @return None.
		*/
		NameNode();
	};
}
#endif // __NAME_NODE_ENV_HPP__
