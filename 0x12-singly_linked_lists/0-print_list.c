#include "lists.h"
#include <stdio.h>

/**
 * print_list - Will print list.
 * @g: param list
 * Return: struct
 */

size_t print_list(const list_t *g)
{
	size_t l_node;

	l_node = 0;
	while (g != NULL)
	{
		if (g->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", g->len, g->str);
		g = g->next;
		l_node++;
	}
	return (l_node);
}
