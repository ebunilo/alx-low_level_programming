#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number
 * @n: parameter
 *
 * Return: if n < 0, returns -1, if n is 0 return 1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
