#include "program_options.hpp"
#include "DataNodeEnv.hpp"


#include "WorldGrid.hpp"
#include "DataGrid.hpp"

/*

Usage: hadoop fs [generic options]
        [-usage [cmd ...]]
*/

static const string constStrDecs =
"Usage: mdfs.datanode\n"
"        [-usage [cmd ...]]\n"
;

int main(int ac,char*av[])
{
	string arv0(av[0]);
	MadoopInternal::DataNodeEnv env(arv0);
	if(false == env.setup())
	{
		return 0;
	}
	MadoopInternal::WorldGrid &world = MadoopInternal::WorldGrid::getInstance();
	if(false == world.build())
	{
		return -1;
	}
	MadoopInternal::DataGrid &data = MadoopInternal::DataGrid::getInstance();
	if(false == data.build())
	{
		return -1;
	}

	string action(av[0]);
	vector<string> params;
	for(int i = 0 ;i < ac;i++)
	{
		params.push_back(av[i]);
	}
	MadoopInternal::ProgramOptions opt(action,params);
	opt.parse();
	opt.doAction();
	return 0;
}
