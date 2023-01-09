#include "hash_tables.h"

/**
 * free_list -- Free linked list
 * @head: pointer to head of linked list
 */
void free_list(hash_node_t **head)
{
	hash_node_t *temp_node;

	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free((*head)->key);
		free((*head)->value);
		*head = temp_node;
	}
}

/**
 * hash_table_delete - Delete hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			free_list(ht->array);
	}
	free(ht->array);
	free(ht);

}

