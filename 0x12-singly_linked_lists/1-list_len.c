#include "lists.h"

/**
 * list_len - This returns the number of elements in a linked lists
 * @g: The linked list of type listint_t to traverse
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *g)
{
	size_t num = 0;

	while (g)
	{
		num++;
		g = g->next;
	}

	return (num);
}
