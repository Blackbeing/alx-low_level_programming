#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: Pointer to linked list
 * @index: Int argument
 *
 * Return: node at index index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_node = head;

	if (temp_node == NULL)
		return (NULL);

	while (temp_node && i < index)
	{
		temp_node = temp_node->next;
		i++;
	}

	return (temp_node);
}
