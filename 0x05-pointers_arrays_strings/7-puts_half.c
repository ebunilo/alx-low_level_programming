#include <stdio.h>
#include <string.h>

/**
 * puts_half - Print half of a string followed by a newline
 * @str: string argument
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len, begin;

	len = strlen(str);

	if (len % 2 == 0)
		begin = len / 2;
	else
		begin = len / 2 + 1;

	for (i = begin; i < len; i++)
		putchar(*(str + i));
	putchar('\n');
}
