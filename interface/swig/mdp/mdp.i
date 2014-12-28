%include "exception.i"
%module mdp
%{
#include "mdp/mdp.hpp"
using namespace Madoop
%}
%include mdp/mdp.hpp
