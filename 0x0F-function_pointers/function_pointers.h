#ifndef _FUNCTION_POINTERS
#define _FUNCTION_POINTERS

#define NULL ((char *)0)
void print_name(char *name, void (*f)(char *));

#endif /* _FUNCTION_POINTERS */