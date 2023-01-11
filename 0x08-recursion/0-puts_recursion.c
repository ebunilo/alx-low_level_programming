#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: pointer
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
