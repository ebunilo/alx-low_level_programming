#include <stdio.h>

/**
 * swap_int - Swap two integers
 * @*a *b: the two integers to swap
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	a = *b;
	*b = tmp;
}
