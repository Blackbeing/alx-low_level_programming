#include "lists.h"

/**
 * list_len - Get number of nodes in a linked list
 * @h: Pointer to singly linked list
 *
 * Return: Number of nodes
 */

size_t list_len(const list_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
