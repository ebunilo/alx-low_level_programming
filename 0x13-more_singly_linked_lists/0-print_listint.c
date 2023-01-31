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
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}