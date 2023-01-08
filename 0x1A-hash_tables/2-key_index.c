#include "hash_tables.h"

/**
 * key_index - Get index of a key
 * @key: str argument
 * @size: int argument
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
