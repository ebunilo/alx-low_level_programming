#include <stdio.h>

/**
 * swap_int - Swap two integers
 * @a: parameter
 * @b: parameter
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
