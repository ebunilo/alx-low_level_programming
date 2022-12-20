#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point to the program
 * @void: Does not take any argument
 *
 * Return: Always (0)
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit < 6 && last_digit != 0)
		printf("and is less than 6 and not 0\n");
	else
		printf("and is 0\n");

	return (0);
}
