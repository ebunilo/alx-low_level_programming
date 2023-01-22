#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: parameters
 *
 * Return: 0 if n == 0, else return n
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int j, sum = 0;

	va_start(ptr, n);

	for (j = 0; j < n; j++)
	{
		sum += va_arg(ptr,  int);
	}
	va_end(ptr);
	return (sum);
}
