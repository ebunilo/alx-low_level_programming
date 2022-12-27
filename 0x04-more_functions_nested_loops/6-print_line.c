#include <stdio.h>

/**
 * print_line - Draw a straight line in the terminal 
 * @n: lenght of line (numbe of characters of _ )
 *
 * Return: Nothing to return
 */

void print_line(int n);
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}

