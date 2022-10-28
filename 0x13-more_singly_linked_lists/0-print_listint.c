#include "lists.h"


/**
 * print_listint - Print elements of listint_t list
 * @h: Pointer to start of linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);

		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
