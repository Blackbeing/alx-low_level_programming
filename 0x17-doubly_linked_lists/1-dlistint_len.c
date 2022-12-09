#include "lists.h"

/**
 * dlistint_len - Get length of dlistint struct
 * @h: dlistint struct pointer
 *
 * Return: number of elements in the dlistint list (*h)
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
