#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: String parameter to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	int len, k, tmp;

	while (*(s + i) != '\0')
		i++;
	len = i;

	k = len - 1;
	while (j < k)
	{
		tmp = *s[j];
		*(s + j) = *(s + k);
		*(s + k) = tmp;
		j++;
		k--;
	}
}
