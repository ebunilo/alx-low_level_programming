#include <stdio.h>

/**
 * _islower - Checks for lowercase character
 * @c: takes integer character
 *
 * Return: Return 1 if c is lowercase, else return 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}

	return (0);
}
