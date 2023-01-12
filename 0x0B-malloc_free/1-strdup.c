#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer of an array
 */
char *_strdup(char *str)
{
	char *e;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	e = (char *)malloc(sizeof(char) * (i + 1));

	if (e == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		e[j] = str[j];

	return (e);
}
