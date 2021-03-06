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
		/** @brief constructor local host self.
		*   @param None.
		*   @return None.
		*/
		NeuroNode();

		/** @brief constructor of remote host
		*   @param uniqued address.
		*   @return None.
		*/
		NeuroNode(const string &uAdd,const string &jconf);
		
		/** @brief build 
		*   @param port number.
		*   @return None.
		*/
		void build(int port);
	private:
	
		
	public:
	private:
		const string _uAdd;
		string _host;
		int _port;
	};
}
#endif // __NEURO_NODE_HPP__

