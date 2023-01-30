#include <stdio.h>

/**
 * print_first - Apply the constructor attribute
 * so it will be printed before main
 *
 */
void print_first(void) __attribute__ ((constructor));

/**
 * print_first - Implementation
 *
 */
void print_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

