#include <stdio.h>

/**
 * print_array - Print n elements of an array
 * @a: array argument
 * @n: int argument
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n-1; i++)
	{
		printf("%d, ", a[i]);
	}
}
