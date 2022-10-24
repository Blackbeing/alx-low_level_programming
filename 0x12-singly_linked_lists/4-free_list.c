#include "lists.h"

/**
 * free_list - Free singly linked list
 * @head: Pointer to list
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head->str);
		free(head);
		head = temp_node;
	}

}
