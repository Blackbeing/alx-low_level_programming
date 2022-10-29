#include "lists.h"


/**
 * pop_listint - Remove header node of linked list
 * @head: Pointer to pointer of linked list
 *
 * Return: n value of header node
 */

int pop_listint(listint_t **head)
{
	int ret_value = 0;
	listint_t *temp_node;

	if (*head == NULL || head == NULL)
		return (0);

	ret_value = (*head)->n;
	temp_node = (*head)->next;

	free(*head);

	*head = temp_node;

	return (ret_value);
}
