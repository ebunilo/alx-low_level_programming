#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 to 14, followed by newline
 * @void: Does not take any parameter
 *
 * Return: Nothing to return
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i / 10 == 0)
		{
			_putchar(i);
		}
		else
		{
			_putchar(i / 10);
			_putchar(i % 10);
		}
	_putchar('\n');
	}
}
