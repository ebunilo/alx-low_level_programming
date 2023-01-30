#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a linked-list
 * @head: The header of the linked list
 * @n: The value stored in a node
 *
 * Return: Return the address of the new node or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	if (n == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/* if (new->n == NULL)
	{
		free(new);
		return (NULL);
	}
	*/
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
