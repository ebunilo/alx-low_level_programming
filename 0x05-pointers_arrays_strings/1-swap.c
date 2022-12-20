#include <stdio.h>

/**
 * swap_int - Swap two integers
 * @*a *b: the two integers to swap
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp, tmp2, *a, *b;

	tmp = *a;
	tmp2 = *b;
	*b = tmp;
	*a = tmp2;
}
