#include "lists.h"

/**
 * listint_len - Get  length of listint_t
 * @h: Pointer to head of linked list
 *
 * Return: Lenght of linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
