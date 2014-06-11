#include "program_options.hpp"
using namespace MadoopInternal;



/** @brief constructor
 *
*/
ProgramOptions::ProgramOptions(const string &action,const vector<string> &params)
:_action(action)
,_params(params)
{
}

/** @brief parse actions
*   @param None.
*   @return None.
*/
void ProgramOptions::parse(void)
{
}
/** @brief do actions
*   @param None.
*   @return 0 succuss.
*/
int ProgramOptions::doAction(void)
{
	int ret = 0;
	return ret;
}
