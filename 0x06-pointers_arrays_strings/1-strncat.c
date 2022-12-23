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
	int j = 0, k = 0, len_dest;

	while (*(dest + j) != '\0')
		j++;
	len_dest = j;

	for (k = 0; k < i; k++)
	{
		*(dest + len_dest) = *(src + k);
		len_dest++;
	}
	*(dest + len_dest) = '\0';

	return (dest);
}
