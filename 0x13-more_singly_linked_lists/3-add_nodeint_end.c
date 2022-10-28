#include "lists.h"
/**
 * add_nodeint_end - Add node at end of linked list
 * @head: Head node of linked list
 * @n: int argument
 *
 * Return: Pointer to endnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp_head = *head;
	listint_t *end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (temp_head == NULL)
		*head = end_node;
	else
	{
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		temp_head->next = end_node;
	}

	return (end_node);
}
