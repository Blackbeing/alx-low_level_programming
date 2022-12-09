#include "lists.h"

/**
 * delete_dnodeint_at_index -- Delete node at index of doubly linked list
 * @head: pointer of pointer
 * @index: Int argument
 *
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *temp_head = *head;
	unsigned int counter = 0;

	if (temp_head == NULL)
		return (-1);

	if (index == 0)
		*head = temp_head->next;
	else
	{
		while (counter < index)
		{
			if (temp_head->next == NULL)
				return (-1);
			temp_head = temp_head->next;
			counter++;
		}
		temp_head->prev->next = temp_head->next;
		temp_head->next->prev = temp_head->prev;
		free(temp_head);
	}

	return (1);
}
