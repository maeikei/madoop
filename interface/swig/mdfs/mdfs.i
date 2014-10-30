%include "exception.i"
%module mdfs
%{
#include "mdfs/mdfs.hpp"
using namespace Madoop
%}
%include mdfs/mdfs.hpp
