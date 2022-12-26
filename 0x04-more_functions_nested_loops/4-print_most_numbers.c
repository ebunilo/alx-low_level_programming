#include <stdio.h>

/**
 * print_most_numbers - Print numbers 0 to 9, without 2 and 4
 * @void: Does not take any parameter
 *
 * Return: Nothing to return
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			putchar(i);
	}
	putchar('\n');
}
