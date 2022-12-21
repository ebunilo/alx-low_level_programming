#include <stdio.h>

/**
 * main - Entry point
 * @void: does not take any paramenter
 *
 * Return: Always (0)
 */

int main(void)
{
	int i, c;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
