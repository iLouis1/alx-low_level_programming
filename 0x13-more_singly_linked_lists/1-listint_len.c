#include "lists.h"

/**
 * listint_len - This returns the number of elements in a linked lists
 * @y: The linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *y)
{
	size_t num = 0;

	while (y)
	{
		num++;
		y = y->next;
	}

	return (num);
}
