#include "lists.h"

/**
 * print_dlistint - This will print all the elemennt
 * of a dlistint_t list
 *
 * @h: This is the head of the list
 * Return: Will return the number nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
