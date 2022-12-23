#include <stdio.h>

/**
 * _strcmp - Compare two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Always (0) Success
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, s1_len = 0, s2_len = 0;

	while (s1[i++])
		s1_len++;

	while (s2[j++])
		s2_len++;

	if (s1_len < s2_len)
		return (-1);

	if (s1_len > s2_len)
		return (1);

	for (k = 0; k < s1_len; k++)
		if (s1[k] != s2[k])
			return (1);

	return (0);
}
