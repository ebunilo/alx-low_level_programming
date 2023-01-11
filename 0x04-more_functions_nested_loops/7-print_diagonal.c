#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: length of diagonal
 *
 * Return: Nothing to return
 */

int main(void){
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);

	return (0);
}
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%s", " ");
		
	}
	if (i > 0)
		printf("\\");
	printf("\n");
}
