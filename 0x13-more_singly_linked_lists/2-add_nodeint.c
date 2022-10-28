#include "lists.h"

/**
 * add_nodeint - Add node to linked list
 * @head: Pointer to pointer of listint_t list
 * @n: int argument
 *
 * Return: Pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
