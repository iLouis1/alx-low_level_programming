#include "lists.h"

/**
 * reverse_listint - Will reverse a linked list
 * @head: The pointer to the first node, in the list
 *
 * Return: This is pointer to the first node, in the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *n;

	p = 0;
	n = 0;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
