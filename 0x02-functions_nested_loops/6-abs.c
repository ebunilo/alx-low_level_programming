#include <stdio.h>
#include <math.h>

/**
 * _abs - Prints the absolute value of a number
 * @j: the number to convert to absolute
 *
 * Return: the absolute number
 */

int _abs(int j)
{
	if (j < 0)
		return (sqrt(j * j));
	else
		return (j);
}
