#ifndef __PROGRAM_OPTIONS_HPP__
#define __PROGRAM_OPTIONS_HPP__
#include <string>
#include <vector>
using namespace std;

namespace MadoopInternal
{
	class ProgramOptions
	{
	public:
		/** @brief constructor
		 *
		*/
		ProgramOptions(const string &action,const vector<string> &params)
		:_action(action)
		,_params(params)
		{}
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
	private:
		/** @brief constructor
		 *
		*/
		ProgramOptions();
		
	private:
		/// 
		string _action;
		///
		vector<string> _params;
	};
}
#endif // __PROGRAM_OPTIONS_HPP__
