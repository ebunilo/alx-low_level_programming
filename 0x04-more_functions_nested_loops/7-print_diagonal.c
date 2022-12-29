#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: length of diagonal
 *
 * Return: Nothing to return
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(" ");
	}
	if (i > 0)
		_putchar('//');
	_putchar('/n');
}
