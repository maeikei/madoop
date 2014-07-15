#include "NeuroNode.hpp"
using namespace MadoopInternal;

#include "MadoopDebug.hpp"

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>

#include <boost/foreach.hpp>
#include <boost/optional.hpp>
#include <boost/log/trivial.hpp>

/** @brief constructor of self host
*   @param uniqued address.
*   @return None.
*/
NeuroNode::NeuroNode(const string &uAdd)
:_uAdd(uAdd)
,_host()
,_port()
{
	TRACE_VAR(_uAdd);
	TRACE_VAR(_host);
	TRACE_VAR(_port);
}

/** @brief constructor of remote host
*   @param uniqued address.
*   @return None.
*/
NeuroNode::NeuroNode(const string &uAdd,const string &jconf)
:_uAdd(uAdd)
,_host()
,_port()
{
	TRACE_VAR(_uAdd);
	TRACE_VAR(_host);
	TRACE_VAR(_port);
}
