#include "lists.h"

/**
 * print_listint - This prints all the number of elements in a linked lists
 * @y: This is the linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *y)
{
	size_t num = 0;

	while (y != NULL)
	{
		printf("%d\n", y->n);
		y = y->next;
		num++;
	}

	return (num);
}
