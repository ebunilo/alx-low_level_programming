#include "main.h"
/**
 * _isupper - return 1 if parameter is uppercase
 * @c: the parameter to check
 * 
 * Return: 0 (Not success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}