#include <stdio.h>

/**
 * main - Entry point
 * @void: does not require parameter
 *
 * Return: Always (0)
 */

int main(void)
{
	char c;

	for (c = '0'; c < '10'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
