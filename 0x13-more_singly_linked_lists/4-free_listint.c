#include "lists.h"

/**
 * free_listint - Free singly linked list
 * @head: Pointer to list
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
