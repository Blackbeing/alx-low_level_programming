#include "hash_tables.h"

/**
 * create_node - Create new hash_node_t
 * @key: str argument
 * @value: str argument
 *
 * Return: new hash_node_t node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = malloc(sizeof(key) + 1);
	node->value = malloc(sizeof(value) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}

/**
 * hash_table_set - Add node to hash table
 * @ht: pointer to hash table
 * @key: str argument
 * @value: str argument
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx = 0;
	const unsigned char *temp_key = (const unsigned char *)key;
	hash_node_t *node;
	hash_node_t *prev_node;

	if (!ht)
		return (0);

	if (!key)
		return (0);

	node = create_node(key, value);

	if (node == NULL)
		return (0);

	key_idx = key_index(temp_key, ht->size);

	if (ht->array[key_idx] != NULL)
	{
		prev_node = ht->array[key_idx];
		node->next = prev_node;
		ht->array[key_idx] = node;
	}
	else
		ht->array[key_idx] = node;

	return (1);

}
