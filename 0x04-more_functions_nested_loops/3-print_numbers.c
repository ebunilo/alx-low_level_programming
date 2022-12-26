#include <stdio.h>

/**
 * print_numbers - Print the numbers from 0 to 9
 * @void: Does not accept parameter
 *
 * Return: Nothing to return
 */

void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
		printf("%d", i);
	printf("%c", '\n');
}
