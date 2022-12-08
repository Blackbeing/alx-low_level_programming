#include "lists.h"

/**
 * print_dlistint - Print all elements of dlistint struct
 * @h: dlistintstruct pointer
 *
 * Return: number of nodes in the dlistint list (*h)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		if (!h->n)
			printf("0\n");
		else
			printf("%d\n", h->n);

		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
