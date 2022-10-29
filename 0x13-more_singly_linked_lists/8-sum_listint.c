#include "lists.h"

/**
 * sum_listint - Sum all data n in listint_t type
 * @head: Pointer to linked list
 *
 * Return: Sum of data n in linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
