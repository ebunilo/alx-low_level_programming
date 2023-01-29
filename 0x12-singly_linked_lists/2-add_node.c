#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - Return the length of a string
 * @s: the string to count its length
 *
 * Return: int length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;

	return (i);
}

/**
 * add_node - Add a new node at the beggining of a list
 * @head: Pointer to the beginning of the list
 * @str: String stored in a node
 *
 * Return: address of the new node or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
