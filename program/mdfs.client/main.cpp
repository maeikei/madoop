#include <iostream>
#include <string>
#include <vector>
using namespace std;


/*

Usage: hadoop fs [generic options]
        [-appendToFile <localsrc> ... <dst>]
        [-cat [-ignoreCrc] <src> ...]
        [-checksum <src> ...]
        [-chgrp [-R] GROUP PATH...]
        [-chmod [-R] <MODE[,MODE]... | OCTALMODE> PATH...]
        [-chown [-R] [OWNER][:[GROUP]] PATH...]
        [-copyFromLocal [-f] [-p] <localsrc> ... <dst>]
        [-copyToLocal [-p] [-ignoreCrc] [-crc] <src> ... <localdst>]
        [-count [-q] <path> ...]
        [-cp [-f] [-p] <src> ... <dst>]
        [-createSnapshot <snapshotDir> [<snapshotName>]]
        [-deleteSnapshot <snapshotDir> <snapshotName>]
        [-df [-h] [<path> ...]]
        [-du [-s] [-h] <path> ...]
        [-expunge]
        [-get [-p] [-ignoreCrc] [-crc] <src> ... <localdst>]
        [-getfacl [-R] <path>]
        [-getmerge [-nl] <src> <localdst>]
        [-help [cmd ...]]
        [-ls [-d] [-h] [-R] [<path> ...]]
        [-mkdir [-p] <path> ...]
        [-moveFromLocal <localsrc> ... <dst>]
        [-moveToLocal <src> <localdst>]
        [-mv <src> ... <dst>]
        [-put [-f] [-p] <localsrc> ... <dst>]
        [-renameSnapshot <snapshotDir> <oldName> <newName>]
        [-rm [-f] [-r|-R] [-skipTrash] <src> ...]
        [-rmdir [--ignore-fail-on-non-empty] <dir> ...]
        [-setfacl [-R] [{-b|-k} {-m|-x <acl_spec>} <path>]|[--set <acl_spec> <path>]]
        [-setrep [-R] [-w] <rep> <path> ...]
        [-stat [format] <path> ...]
        [-tail [-f] <file>]
        [-test -[defsz] <path>]
        [-text [-ignoreCrc] <src> ...]
        [-touchz <path> ...]
        [-usage [cmd ...]]
*/

static const string constStrDecs =
"Usage: mdfs.client\n"
"        [-appendToFile <localsrc> ... <dst>]\n"
"        [-cat [-ignoreCrc] <src> ...]\n"
"        [-checksum <src> ...]\n"
"        [-chgrp [-R] GROUP PATH...]\n"
"        [-chmod [-R] <MODE[,MODE]... | OCTALMODE> PATH...]\n"
"        [-chown [-R] [OWNER][:[GROUP]] PATH...]\n"
"        [-copyFromLocal [-f] [-p] <localsrc> ... <dst>]\n"
"        [-copyToLocal [-p] [-ignoreCrc] [-crc] <src> ... <localdst>]\n"
"        [-count [-q] <path> ...]\n"
"        [-cp [-f] [-p] <src> ... <dst>]\n"
"        [-createSnapshot <snapshotDir> [<snapshotName>]]\n"
"        [-deleteSnapshot <snapshotDir> <snapshotName>]\n"
"        [-df [-h] [<path> ...]]\n"
"        [-du [-s] [-h] <path> ...]\n"
"        [-expunge]\n"
"        [-get [-p] [-ignoreCrc] [-crc] <src> ... <localdst>]\n"
"        [-getfacl [-R] <path>]\n"
"        [-getmerge [-nl] <src> <localdst>]\n"
"        [-help [cmd ...]]\n"
"        [-ls [-d] [-h] [-R] [<path> ...]]\n"
"        [-mkdir [-p] <path> ...]\n"
"        [-moveFromLocal <localsrc> ... <dst>]\n"
"        [-moveToLocal <src> <localdst>]\n"
"        [-mv <src> ... <dst>]\n"
"        [-put [-f] [-p] <localsrc> ... <dst>]\n"
"        [-renameSnapshot <snapshotDir> <oldName> <newName>]\n"
"        [-rm [-f] [-r|-R] [-skipTrash] <src> ...]\n"
"        [-rmdir [--ignore-fail-on-non-empty] <dir> ...]\n"
"        [-setfacl [-R] [{-b|-k} {-m|-x <acl_spec>} <path>]|[--set <acl_spec> <path>]]\n"
"        [-setrep [-R] [-w] <rep> <path> ...]\n"
"        [-stat [format] <path> ...]\n"
"        [-tail [-f] <file>]\n"
"        [-test -[defsz] <path>]\n"
"        [-text [-ignoreCrc] <src> ...]\n"
"        [-touchz <path> ...]\n"
"        [-usage [cmd ...]]\n"
;

#include <boost/program_options.hpp>
namespace po = boost::program_options;


#include "program_options.hpp"

int main(int ac,char*av[])
{
/*
	po::options_description opt(constStrDecs);
	opt.add_options()
		("help,h"      , "")
		("appendToFile",po::value< vector<string> >(),"<localsrc> ... <dst>")
		("cat",po::value< vector<string> >(),"[-ignoreCrc] <src> ...]")

	;
	
	po::variables_map vm;
	try
	{
		po::store(po::parse_command_line(ac, av, opt), vm);
	}
	catch(const po::error_with_option_name& e)
	{
		std::cout << e.what() << std::endl;
	}	
	po::notify(vm);
	
	if(vm.count("help"))
	{
		std::cout << opt << std::endl;
	}
	if(vm.count("appendToFile"))
	{
	}
*/
	if(2 >ac )
	{
		cout << constStrDecs << endl;
		return 0;
	}
	string action(av[1]);
	vector<string> params;
	for(int i = 2 ;i < ac;i++)
	{
		params.push_back(av[i]);
	}
	MadoopInternal::ProgramOptions opt(action,params);
	opt.parse();
	opt.doAction();
	return 0;
}

