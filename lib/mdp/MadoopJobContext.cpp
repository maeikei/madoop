#include "mdp/mdp.hpp"
using namespace Madoop;


#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>



/** @brief constructor
*   @param None.
*   @return None.
*/
MadoopJobContext::MadoopJobContext()
{
}

TextFile MadoopJobContext::textFile(const string &uri)
{
	return TextFile(uri);
}



