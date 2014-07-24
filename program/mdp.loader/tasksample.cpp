#include "mdp/mdp.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace Madoop;

#define TASK_ENTRY(x) extern "C" int x()

extern "C" int task_entry(void)
{
	auto _textFile = mc.textFile("mdfs://[......]/input");

	auto filterLine = []( TextLineFilter &_l) -> bool { return _l.empty(); };
	auto _lines = _textFile.lines(filterLine);

	auto filterWord = []( TextWordFilter &_w) -> bool { return _w.empty(); };
	auto _words = _textFile.words(filterWord);
	
	_words.write("mdfs://[......]/output");
	return 0;
}

