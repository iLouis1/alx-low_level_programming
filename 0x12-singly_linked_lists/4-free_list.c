#include "lists.h"
#include <stdlib.h>

/**
 * free_list - This frees a list_t list
 * @head: This is a pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
