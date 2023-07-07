#include "lists.h"

/**
 * free_listp2 - This frees a linked list
 * @head: This is the head of a list.
 *
 * Return: 0.
 */

void free_listp2(listp_t **head)
{
	listp_t *curr;
	listp_t *temp;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - This frees a linked list.
 * @y: The head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **y)
{
	listp_t *hptr, *new, *add;
	size_t nnodes = 0;
	listint_t *curr;

	hptr = 0;
	while (*y != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->next = hptr;
		new->p = (void *)*y;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*y == add->p)
			{
				*y = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		curr = *y;
		*y = (*y)->next;
		free(curr);
		nnodes++;
	}
	*y = 0;
	free_listp2(&hptr);
	return (nnodes);
}
