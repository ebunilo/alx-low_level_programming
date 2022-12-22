#include <stdio.h>

/**
 * _strcat - Concatenate two strings
 * @dest: Destination parameter
 * @src: Source parameter
 *
 * Return: Pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = strlen(dest);

	for (i = 0; i <= strlen(*src)
	{
		*(dest + j) = *(src + i);
		j++;
	}

	return (dest);
}
