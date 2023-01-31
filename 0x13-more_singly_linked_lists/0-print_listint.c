#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Print all the elements of a list
 * @h: The first node in the list
 *
 * Return: Return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
