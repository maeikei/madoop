#include <iostream>
#include <boost/program_options.hpp>

namespace po = boost::program_options;
using namespace std;

int main(int ac,char*av[])
{
	po::options_description desc("オプションの説明");
	desc.add_options()
		("help,h"      , "ヘルプの出力")
	;
	return 0;
}
