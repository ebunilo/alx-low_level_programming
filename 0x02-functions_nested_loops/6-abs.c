#include <stdio.h>

/**
 * _abs - Prints the absolute value of a number
 * @j: the number to convert to absolute
 *
 * Return: the absolute number
 */

int _abs(int j)
{
	if (j < 0)
		j = j * -1;
	return (j);
}
