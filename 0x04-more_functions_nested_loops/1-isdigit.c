#include "main.h"

/**
 * _isdigit - Checks if argument is a digit
 * @c: the number to check
 *
 * Return: return 1 if c is a digit, return 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
