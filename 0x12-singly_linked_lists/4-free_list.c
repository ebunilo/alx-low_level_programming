#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free a list
 * @head: First node of the list
 *
 */

void free_list(list_t *head)
{
	while (head)
	{
		if (head->str)
			free(head->str);
		head = head->next;
	}
	free(head);
}
