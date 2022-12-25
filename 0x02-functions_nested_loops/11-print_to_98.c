#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98 followed by new line
 * @n: Starting number
 *
 * Return: Nothing to return
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf("%s", ", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf("%s", ", ");
		}
	}
	printf("%s", "\n");
}
