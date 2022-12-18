#include "main.h"
/**
 * _isupper - return 1 if parameter is uppercase
 * @c: the parameter to check
 * Return: 0 (Not success)
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
