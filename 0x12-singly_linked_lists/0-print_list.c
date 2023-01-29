#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all element of a list
 * @h: Pointer to the list
 *
 * Return: Returns (0)
 */

size_t print_list(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt += 1;
		if (h->str == NULL)
		{
			printf("[%d] (%s)", 0, "nil");
		}
		else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
	}

	return (cnt);
}
