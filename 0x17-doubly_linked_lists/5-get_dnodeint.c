#include "lists.h"

/**
 * get_dnodeint_at_index -- Get node at index of doubly linked list
 * @head: Pointer to doubly linked list
 * @index: Int argument
 *
 * Return: Node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	while (counter < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		counter++;
	}
	return (head);

}
