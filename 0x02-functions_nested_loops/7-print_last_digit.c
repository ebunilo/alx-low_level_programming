#include "main.h"

/**
 * print_last_digit - Return the value of the last digit
 * @j: integer number
 *
 * Return: Return the value of last digit
 */

int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (k < 0)
		k = k * (-1);
	_putchar(k + '0');

	return (k);
}
