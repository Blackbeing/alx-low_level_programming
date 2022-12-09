#include "lists.h"

/**
 * sum_dlistint -- Sum all values in doubly linked list
 * @head: Pointer to doubly linked list
 *
 * Return: Sum of all node values
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
