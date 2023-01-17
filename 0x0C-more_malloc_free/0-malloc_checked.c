#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: a pointer to the allocated memory. If memory fails
 * should cause normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	int *r;

	r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
