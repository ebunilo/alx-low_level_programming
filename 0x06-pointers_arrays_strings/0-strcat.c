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
	int i = 0, j = 0, k = 0;
	int len_src, len_dest;

	while (*(dest + i) != '\0')
		i++;
	len_dest = i;

	while (*(src + j) != '\0')
		j++;
	len_src = j;

	for (k = 0; k < len_src; k++)
	{
		*(dest + len_dest) = *(src + k);
		len_dest++;
	}
	*(src + k) = '\0';

	return (dest);
}
