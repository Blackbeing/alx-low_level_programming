#include "lists.h"

/**
 * add_dnodeint_end - Add node at end doubly linked list
 * @head: Pointer to header node
 * @n:  int argument
 *
 * Return: Pointer to newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (temp_node == NULL)
		*head = new_node;
	else
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
		new_node->prev = temp_node;
	}

	return (new_node);
}
