#include <stdio.h>

/**
 * print_alphabet_x10 - Print 10 times the alphabet in lowercase
 * @void: Does not take any parameter
 *
 * Return: does not return any data
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char j;

	while (i < 10)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(j);
		putchar('\n');
		i++;
	}
}
