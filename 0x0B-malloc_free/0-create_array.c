#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars, and initializes it
 * @size: size of the array
 * @c: storaged character
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == 0)
		return (NULL);

	r = malloc(sizeof(c) * size);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		r[i] = c;

	return (r);
}
