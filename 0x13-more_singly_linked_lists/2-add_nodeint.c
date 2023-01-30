#include "lists.h"

/**
 * add_nodeint - Add a new node at the begining of a list
 * @head: The header node
 * @n: int value to be stored in the node
 *
 * Return: Return address of new node or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = head;
	*head = new;

	return (new);
}

