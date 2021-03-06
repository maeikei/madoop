#ifndef __MADOOP_DEBUG_HPP__
#define __MADOOP_DEBUG_HPP__

#include <boost/log/trivial.hpp>
#define TRACE_VAR(x) BOOST_LOG_TRIVIAL(trace) << __FILE__ << ":" << __func__  << ":" << __LINE__ << "::" << #x << " = <" << x << ">" << endl;

#define FATAL_VAR(x) BOOST_LOG_TRIVIAL(fatal) << __FILE__ << ":" << __func__  << ":" << __LINE__ << "::" << #x << " = <" << x << ">" << endl;

#endif // __MADOOP_DEBUG_HPP__
