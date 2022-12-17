#include "main.h"

/**
 * _isdigit - Checks if argument is a digit
 * @c: the number to check
 *
 * Return: return 1 if c is a digit, return 0 otherwise
 */

int _isdigit(c)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
