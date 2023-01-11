#include "main.h"

/**
 * _isalpha - check if character is alphabet character
 * @c: type int character
 * Return: 1 if letter, lowercae or uppercase,0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
