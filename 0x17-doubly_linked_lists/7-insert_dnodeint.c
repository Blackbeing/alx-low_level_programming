#include "lists.h"

/**
 * insert_dnodeint_at_index -- Insert node at index
 * @h: pointer to pointer of doubly linked list
 * @idx: int argument
 * @n: int argument (value)
 *
 * Return: Address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp_head = *h;

	if (new_node == NULL || temp_head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp_head;

	if (idx == 0)
	{
		temp_head->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	else
	{

		while (counter < idx)
		{
			if (temp_head->next == NULL)
				return (NULL);
			temp_head = temp_head->next;
			counter++;
		}
		new_node->next = temp_head;
		new_node->prev = temp_head->prev;
		temp_head->prev->next = new_node;
		temp_head->prev = new_node;
	}


	return (new_node);
}
