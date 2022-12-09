#include "lists.h"

/**
 * free_dlistint - Free doubly linked list
 * @head: Pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_head;

	while (head)
	{
		temp_head = head->next;
		free(head);
		head = temp_head;
	}
	free(head);
}
