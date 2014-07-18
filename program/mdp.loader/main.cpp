#include "mdp/mdp.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace Madoop;

int main(int ac,char*av[])
{
	auto _textFile = mc.textFile("mdfs://[......]/");

	auto filterLine = []( TextLineFilter &_l) -> bool { return _l.empty(); };
	auto _lines = _textFile.lines(filterLine);

	auto filterWord = []( TextWordFilter &_w) -> bool { return _w.empty(); };
	auto _words = _textFile.words(filterWord);
	
	
	return 0;
}
