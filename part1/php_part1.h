
#ifndef PHP_PART1_H
#define PHP_PART1_H

extern zend_module_entry part1_module_entry;
#define phpext_part1_ptr &part1_module_entry

#ifdef ZTS
#include "TSRM.h"
#endif

PHP_MINIT_FUNCTION(part1);
PHP_MINFO_FUNCTION(part1);

PHP_FUNCTION(part1_test);

#endif /* PHP_PART1_H */
