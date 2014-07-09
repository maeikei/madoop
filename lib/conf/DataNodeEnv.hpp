#ifndef __DATA_NODE_ENV_HPP__
#define __DATA_NODE_ENV_HPP__
#include <string>
#include <vector>
using namespace std;

#include "commonEnv.hpp"

namespace MadoopInternal
{
	class DataNodeEnv: public CommonEnv
	{
	public:
		/** @brief constructor
		*   @param argv0 arvv[0].
		*/
		DataNodeEnv(const string &argv0);

		/** @brief parse actions
		*   @param None.
		*   @return true success,false fail.
		*/
		virtual bool setup(void);
	private:
		/** @brief constructor
		 *
		*/
		DataNodeEnv();
		
	};
}
#endif // __DATA_NODE_ENV_HPP__
