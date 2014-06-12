#include "program_action.hpp"
using namespace MadoopInternal;



/** @brief constructor
 *
*/
ProgramActions::ProgramActions(const string &action,const vector<string> &params)
:_action(action)
,_params(params)
{}

/** @brief parse actions
*   @param None.
*   @return None.
*/
void ProgramActions::parse(void)
{
}
/** @brief do actions
*   @param None.
*   @return 0 succuss.
*/
int ProgramActions::doAction(void)
{
	int ret = 0;
	return ret;
}
