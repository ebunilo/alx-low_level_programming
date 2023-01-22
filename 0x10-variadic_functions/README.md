Learnt on Variadic functions
example
int rob(const int n, ...)

int is used with various functions fron the header <stdarg.h>
they are
va_list(represents the pointer to the argument in the function)
va_start. enabled access to function
va_start(what is in va_list, argument in function)
va_arg. accesses the next variadic function)
va_arg(what is in va_list, data type)
va_end. ends the traversal of the variadic function
va_end(what is in the va_list)
va_copymakes a copy of the variadic function
va_copy(va_list dest, va_list src)

CONST KEYWORD
it is used where you do not want to change the value of the variable or pointer
