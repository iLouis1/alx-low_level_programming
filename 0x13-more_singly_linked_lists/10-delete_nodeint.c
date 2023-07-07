#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes a node in a linked list at a certain index
 * @head: This is the pointer to the first element in the list
 * @index: The index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	unsigned int u;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (u = 0; u < index - 1 && prev != 0; u++)
		{
			prev = prev->next;
		}

	}

	if (prev == 0 || (prev->next == 0 && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
