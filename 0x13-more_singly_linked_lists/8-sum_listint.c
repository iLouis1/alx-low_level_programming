#include "lists.h"

/**
 * sum_listint - will calculate the sum of all the data in a listint_t list
 * @head: This is the first node in the linked list
 *
 * Return: returns the resulting sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != 0)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
