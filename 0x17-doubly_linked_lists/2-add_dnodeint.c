#include "lists.h"

/**
 * add_dnodeint - Add node at beginning doubly linked list
 * @head: Pointer to header node
 * @n:  int argument
 *
 * Return: Pointer to newly created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head = malloc(sizeof(dlistint_t));
	dlistint_t *temp_head = *head;

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->prev = NULL;
	new_head->next = temp_head;

	if (temp_head == NULL)
		*head = new_head;
	else
	{
		temp_head->prev = new_head;
		*head = new_head;
	}

	return (new_head);
}
