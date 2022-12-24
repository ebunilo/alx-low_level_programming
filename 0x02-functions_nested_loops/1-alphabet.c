#include <stdio.h>

/**
 * print_alphabet - Print the alphabets in small case
 * @void: Does not take any paramenter
 *
 * Return: Returns Nothing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
}
