#include <stdio.h>

/**
 * main - Entry point
 * @void: does not take any paramenter
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
