#include <stdio.h>
#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @n: lenght of line (numbe of characters of _ )
 *
 * Return: Nothing to return
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int r;

		for (r = 1; r <= n; r++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
