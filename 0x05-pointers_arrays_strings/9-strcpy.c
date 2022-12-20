#include <stdio.h>

/**
 * _strcpy - Copy string including null from source to destination
 * @dest: argument - destination address
 * @src: argument - source address
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i+1) = '\0';

	return (dest);
}
