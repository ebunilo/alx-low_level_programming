#include <stdio.h>

/**
 * print_last_digit - Return the value of the last digit
 * @j: integer number
 *
 * Return: Return the value of last digit
 */

int print_last_digit(int j)
{
	j = j % 10;
	printf("%d", j);
	return (j);
}
