#include <stdio.h>

/**
 * main - Print the name of the file program was compiled from
 * @void:  No parameter
 *
 * Return: (0)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

