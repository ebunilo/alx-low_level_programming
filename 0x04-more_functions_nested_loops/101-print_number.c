#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer to be printed
 */

void print_number(int n)
{
	unsigned int r;

	if (n < 0)
	{
		r = -n;
		_putchar('-');
	}
	else
	{
		r = n;
	}

	if (r / 10)
	{
		print_number(r / 10);
	}

	_putchar((r % 10) + '0');
}
