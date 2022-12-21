#include <stdio.h>

/**
 * main - Entry point
 * @void: does not require parameter
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = '0'; i < '10'; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
