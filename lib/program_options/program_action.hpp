#ifndef __PROGRAM_OPTIONS_HPP__
#define __PROGRAM_OPTIONS_HPP__
#include <string>
#include <vector>
using namespace std;

namespace MadoopInternal
{
	class ProgramActions
	{
	public:
		/** @brief constructor
		 *
		*/
		ProgramActions(const string &action,const vector<string> &params);

		/** @brief parse actions
		*   @param None.
		*   @return None.
		*/
		void parse(void);
		
		/** @brief do actions
		*   @param None.
		*   @return 0 succuss.
		*/
		int doAction(void);
	protected:
		/** @brief constructor
		 *
		*/
		ProgramActions();
		
	protected:
		/// 
		string _action;
		///
		vector<string> _params;
	};
}
#endif // __PROGRAM_OPTIONS_HPP__
