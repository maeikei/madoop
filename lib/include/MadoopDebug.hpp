#ifndef __MADOOP_DEBUG_HPP__
#define __MADOOP_DEBUG_HPP__

#include <boost/log/trivial.hpp>
#define TRACE_VAR(x) BOOST_LOG_TRIVIAL(trace) << __func__  << ": " << #x << " = <" << x << ">" << endl;

#define FATAL_VAR(x) BOOST_LOG_TRIVIAL(fatal) << __func__  << ": " << #x << " = <" << x << ">" << endl;

#endif // __MADOOP_DEBUG_HPP__
