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

	key_idx = key_index(temp_key, ht->size);

	if (!ht->array[key_idx])
		return (NULL);
	return (ht->array[key_idx]->value);
}
