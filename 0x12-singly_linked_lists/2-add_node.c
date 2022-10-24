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
 * add_node - Add node at beginning of singly linked list
 * @head: Pointer to header node
 * @str: String of node data to insert
 *
 * Return: Pointer to newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *temp_str = strdup(str);
	int str_len = _strlen(temp_str);
	list_t *new_head = malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = temp_str;
	new_head->len = str_len;
	new_head->next = *head;

	*head = new_head;

	return (new_head);
}
