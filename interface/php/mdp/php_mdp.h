/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef PHP_MDP_H
#define PHP_MDP_H

extern zend_module_entry mdp_module_entry;
#define phpext_mdp_ptr &mdp_module_entry

#ifdef PHP_WIN32
# define PHP_MDP_API __declspec(dllexport)
#else
# define PHP_MDP_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(mdp);
PHP_MSHUTDOWN_FUNCTION(mdp);
PHP_RINIT_FUNCTION(mdp);
PHP_RSHUTDOWN_FUNCTION(mdp);
PHP_MINFO_FUNCTION(mdp);

ZEND_NAMED_FUNCTION(_wrap_new_MadoopJobContext);
ZEND_NAMED_FUNCTION(_wrap_MadoopJobContext_textFile);
ZEND_NAMED_FUNCTION(_wrap_MadoopJobContext_imageFile);
ZEND_NAMED_FUNCTION(_wrap_MadoopJobContext_videoFile);
ZEND_NAMED_FUNCTION(_wrap_MadoopJobContext_audioFile);
ZEND_NAMED_FUNCTION(_wrap_MdpObject_write);
ZEND_NAMED_FUNCTION(_wrap_new_TextLine);
ZEND_NAMED_FUNCTION(_wrap_new_TextLineFilter);
ZEND_NAMED_FUNCTION(_wrap_TextLineFilter_c_empty);
ZEND_NAMED_FUNCTION(_wrap_new_TextWord);
ZEND_NAMED_FUNCTION(_wrap_new_TextWordFilter);
ZEND_NAMED_FUNCTION(_wrap_TextWordFilter_c_empty);
ZEND_NAMED_FUNCTION(_wrap_new_TextFile);
ZEND_NAMED_FUNCTION(_wrap_mc_set);
ZEND_NAMED_FUNCTION(_wrap_mc_get);
#endif /* PHP_MDP_H */
