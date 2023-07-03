#include "lists.h"
#include <string.h>

/**
 * add_node_end - Will add a new node at the end of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: String to be added to the list_t list.
 *
 * Return: if the function fails - NULL.
 * Otherwise - The address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len];)
	len++;

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->str = dup;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
