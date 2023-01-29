#include <string.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list
 * @h: Pointer to a list
 *
 * Return: Returns the number of elements
 */

size_t list_len(const list_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}

