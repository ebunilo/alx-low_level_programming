#include <stdio.h>

/**
 * main - print all combinations of single digit numbers, separated by coma
 * @void: does not take any parameter
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
