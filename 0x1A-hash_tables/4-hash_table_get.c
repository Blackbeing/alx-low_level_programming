#include "hash_tables.h"

/**
 * hash_table_get - Retrieve values from hash tables by key
 * @ht: hash table pointer
 * @key: str argument
 *
 * Return: value of key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx = 0;
	const unsigned char *temp_key = (const unsigned char *)key;
	hash_node_t *head;
	int i = 0;

	if (!ht || ht == NULL)
		return (NULL);

	key_idx = key_index(temp_key, ht->size);

	if (!ht->array[key_idx])
		return (NULL);

	/* return (ht->array[key_idx]->key); */
	head = ht->array[key_idx];
	while (head)
	{
		if (strcmp(head[i].key,  key) == 0)
			break;
		head = head->next;
	}
	return (head->value);
}
