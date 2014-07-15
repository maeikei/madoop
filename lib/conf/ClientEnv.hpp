#ifndef __CLIENT_ENV_HPP__
#define __CLIENT_ENV_HPP__
#include <string>
#include <vector>
using namespace std;

#include "CommonEnv.hpp"

namespace MadoopInternal
{
	class ClientEnv: public CommonEnv
	{
	public:
		/** @brief constructor
		*   @param argv0 arvv[0].
		*/
		ClientEnv(const string &argv0);

		/** @brief parse actions
		*   @param None.
		*   @return true success,false fail.
		*/
		virtual bool setup(void);
	private:
		/** @brief constructor
		 *
		*/
		ClientEnv();
		
	};
}
#endif // __CLIENT_ENV_HPP__
