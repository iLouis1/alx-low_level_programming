#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @head: The listint_t list to be freed
 *
 * Return: return 0
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
