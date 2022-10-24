#include "lists.h"

/**
 * print_list - Print all elements of list_t struct
 * @h: list_t struct pointer
 *
 * Return: number of nodes in the list (*h)
 */

size_t print_list(const list_t *h)
{
	int num_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
