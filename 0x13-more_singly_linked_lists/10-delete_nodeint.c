#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: pointer head listint_t list.
 * @index: int argument
 *
 * Return: 1 (Success), 0 Failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node, *temp_node = *head;
	unsigned int i;

	if (temp_node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_node);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (temp_node->next == NULL)
			return (-1);

		temp_node = temp_node->next;
	}

	del_node = temp_node->next;
	temp_node->next = del_node->next;
	free(del_node);
	return (1);
}

