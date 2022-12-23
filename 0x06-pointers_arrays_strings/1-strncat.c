#include <stdio.h>

/**
 * _strncat - Concatinates two strings with n bytes from the source
 * @dest: destination string parameter
 * @src: source string parameter
 * @i: int representing number of source bytes to copy
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int i)
{
	int j = 0,

	for (j = 0; j < i && src[i] != '\0'; j++)
		*(dest + j) = *(src + j);
	for ( ; j < n; j++)
		*(dest + j) = '\0';

	return (dest);
}
