#include <stdio.h>

/**
 * _puts - Prints a string followed by a newline
 * @s: String parameter to be written to the screen
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
}
