#include "lists.h"
#include <string.h>

/**
 * _strlen - Get length of string
 * @str: Pointer to string
 *
 * Return: Length of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node_end - Add node at beginning of singly linked list
 * @head: Pointer to header node
 * @str: String of node data to insert
 *
 * Return: Pointer to newly created node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *temp_str = strdup(str);
	int str_len = _strlen(temp_str);

	list_t *temp_head = *head;
	list_t *new_tail = malloc(sizeof(list_t));

	if (new_tail == NULL)
		return (NULL);

	new_tail->str = temp_str;
	new_tail->len = str_len;
	new_tail->next = NULL;

	/**
	 * If head list is empty, new list becomes the head
	 */

	if  (temp_head == NULL)
		*head = new_tail;
	else
	{
		while (temp_head->next != NULL)
			temp_head = temp_head->next;
		temp_head->next = new_tail;
	}


	return (new_tail);


}
