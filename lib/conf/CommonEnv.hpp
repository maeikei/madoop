#ifndef __COMMON_ENV_HPP__
#define __COMMON_ENV_HPP__
#include <string>
#include <vector>
using namespace std;


#include <boost/filesystem/path.hpp>
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/fstream.hpp>
namespace fs = boost::filesystem;

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
namespace pt = boost::property_tree;

namespace MadoopInternal
{
	class CommonEnv
	{
	public:
		/** @brief constructor
		*   @param argv0 arvv[0].
		*/
		CommonEnv(const string &argv0);

		/** @brief parse actions
		*   @param None.
		*   @return true success,false fail.
		*/
		virtual bool setup(void);


		/** @brief parse actions
		*   @param None.
		*   @return true success,false fail.
		*/
		int port(void) const {return _port;}
		
	protected:
		/** @brief read json confiure.
		*   @param None.
		*   @return true success,false fail.
		*/
		void readJson(const string &path,pt::ptree &pt);

		/** @brief set up world grid
		*   @param None.
		*   @return true success,false fail.
		*/
		virtual bool setupWorldGrid(void);

		/** @brief read configures
		*   @param None.
		*   @return true success,false fail.
		*/
		bool readConf(void);
		
	private:
		/** @brief constructor
		 *
		*/
		CommonEnv();
		
	protected:
		const string _argv0;
		fs::path _confRoot;
		vector<string> _worldhosts;
		int _port;
	};
}
#endif // __COMMON_ENV_HPP__
