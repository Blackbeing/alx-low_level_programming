#include "hash_tables.h"

/**
 * hash_djb2 - Hash string with djb2 algorithm
 * @str: string argument
 *
 * Return: djb2 hash (unsigned long int)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;

	return (hash);

}
