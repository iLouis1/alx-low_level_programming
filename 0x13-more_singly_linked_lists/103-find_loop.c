#include "lists.h"

/**
 * find_listint_loop - This finds the loop in a linked list
 * @head: The linked list to search for
 *
 * Return: This is the address of the node, where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	if (!head)
		return (0);

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (fast);
		}
	}
	return (0);
}
