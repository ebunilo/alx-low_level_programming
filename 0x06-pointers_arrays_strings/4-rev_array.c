#include <stdio.h>

/**
 * reverse_array - Reverse content of an array of integers
 * @a: arrary paramenter
 * @n: number of elements of array
 *
 * Return: Nothing to return
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
