
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_ini.h"
#include "ext/standard/info.h"
#include "php_part1.h"


const zend_function_entry part1_functions[] = {
    PHP_FE(part1_test, NULL)
    {NULL, NULL, NULL}
};

zend_module_entry part1_module_entry = {
    STANDARD_MODULE_HEADER,
    "part1",
    part1_functions,
    PHP_MINIT(part1),
    NULL,
    NULL,
    NULL,
    PHP_MINFO(part1),
    "0.1",
    STANDARD_MODULE_PROPERTIES
};


#ifdef COMPILE_DL_PART1
ZEND_GET_MODULE(part1)
#endif


PHP_MINIT_FUNCTION(part1)
{
    return SUCCESS;
}

PHP_MINFO_FUNCTION(part1)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "part1 support", "enabled");
    php_info_print_table_end();
}

PHP_FUNCTION(part1_test)
{
    php_printf("test from part1\n");
}
