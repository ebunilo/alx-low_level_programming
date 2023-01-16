#include "main.h"

/*
 * _memset - Fills the first n bytes of the memory area with constant b
 * @s: memory block address
 * @b: char to be used
 * @n: int parameter
 * Description: Fills the first n bytes of the memory area with bytes
 *
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
