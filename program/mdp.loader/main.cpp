#include "mdp/mdp.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace Madoop;

#include "MadoopDebug.hpp"

#include <dlfcn.h>


static int task_entry(void)
{
	return 0;
}

//typedef int (*TaskEntry)(void);

int main(int ac,char*av[])
{
	auto entry = task_entry;
	TRACE_VAR(entry);
	auto dl_handle = dlopen("/home/ma/workspace/samba/madoop-dev/madoop/package/lib/libmdp.tasksample.so", RTLD_LAZY );
	if(nullptr != dl_handle)
	{
		TRACE_VAR(dl_handle);
		entry = ( decltype(entry) )dlsym(dl_handle,"task_entry");
		TRACE_VAR(entry);
		int ret = entry();
		TRACE_VAR(ret);
		dlclose(dl_handle);
		return ret;
	}
	else
	{
		FATAL_VAR(dl_handle);
		string msg(dlerror());
		FATAL_VAR(msg);
		return -1;
	}
}

