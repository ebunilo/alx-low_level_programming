#include <stdio.h>

/**
 * puts2 - Print everyother character starting from the first
 * @str: string parameter
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
			i++;
		}
	}
	putchar('\n');
}
