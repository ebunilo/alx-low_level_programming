#include <stdio.h>

/**
 * _strncpy - copy string from source to destination
 * @dest: Destination paramenter
 * @src: Source parameter
 *
 *Return: Return pointer to parameter
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
