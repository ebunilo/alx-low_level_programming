#include <stdio.h>

/**
 * reverse_array - Reverse content of an array of integers
 * @a: arrary paramenter
 * @n: number of elements of array
 *
 * Return: Nothing to return
 */

void reverse_array(int *a, int n);
{
	int j = 0, k, tmp;

	k = n - 1;
	while (j < k)
	{
		tmp = *(a + j);
		*(a + j) = *(a + k);
		*(a + k) = tmp;
		j++;
		k--;
	}
}