#ifndef __SYSTEM_COMMAND_HPP__
#define __SYSTEM_COMMAND_HPP__
#include <string>
#include <vector>
using namespace std;

#include "CommonEnv.hpp"

namespace MadoopInternal
{
	class SystemCommand
	{
	public:
		/** @brief constructor
		*   @param cmd command to run.
		*/
		SystemCommand(const string &cmd);

		/** @brief get run result
		*   @param None.
		*   @return run result.
		*/
		string result(void);
	private:
		/** @brief constructor
		 *
		*/
		SystemCommand();
	private:
		const string &_cmd;
	};
}
#endif // __SYSTEM_COMMAND_HPP__
