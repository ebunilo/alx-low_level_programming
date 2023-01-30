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
 * add_node_end - Add a new node at the end of a list
 * @head: The first node of the list
 * @str: String value stored in a node
 *
 * Return - Return the address of the new node or Null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	if (str == NULL)
                return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}

