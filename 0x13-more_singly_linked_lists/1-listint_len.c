#include "lists.h"

/**
 * listint_len - Return the number of elements in a list
 * @h: The header of the list
 *
 * Return: Returns the number of elements in the list
 *
 */

size_t listint_len(const listint_t *h)
{
	int cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}

