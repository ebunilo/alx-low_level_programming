#include <stdio.h>

/**
 * main - Entry point
 * @void: does not require parameter
 *
 * Return: Always (0)
 */

int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
