#include <stdio.h>

/**
 * _strlen - retuns the length of a string
 * @s: the string to count its length
 *
 * Return: int length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}
