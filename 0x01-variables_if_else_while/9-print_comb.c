#include <stdio.h>

/**
 * main - print all possible combinations of single digit numbers, separated by coma
 * @void: does not take any parameter
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = '1'; i <= '9'; i++)
		if (i != '9')
		{
			putchar(i);
			putchar(', ');
		}
		else
		{
			putchar(i);
		}
	putchar('\n');

	return (0);
}
