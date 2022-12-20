#include <stdio.h>

/**
 * puts_half - Print half of a string followed by a newline
 * @str: string argument
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len, end;

	len = strlen(str) / 2;
	end = 2 * len;

	for (i = len; i < end; i++)
		putchar(*(str + i));
}
