#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 * @s: string paramenter 
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;
	int j, length;

	while (*(s + i) != 0)
		i++;
	length = i;

	for (j = length - 1; j >= 0; j--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
	
}
