#include "main.h"

/**
 * string_toupper - changes all lowercas to uppercase
 *@str: string parameter
 * 
 * Return: string address
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
