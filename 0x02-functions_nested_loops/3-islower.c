#include <stdio.h>

/**
 * _islower - Checks for lowercase character
 * @c: takes integer character
 *
 * Return: Return 1 if c is lowercase, else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
