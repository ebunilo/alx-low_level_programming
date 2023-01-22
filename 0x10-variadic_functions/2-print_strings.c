#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Description: if separator is NULL, it is not printed.
 *               if one of the string is NULL, (nil) is printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
