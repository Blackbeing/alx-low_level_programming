#include "hash_tables.h"

/**
 * print_node - Print node
 * @node: hash_node_t
 *
 */
void print_node(hash_node_t *node)
{
	printf("'%s': '%s'", node->key, node->value);
}

/**
 * hash_table_print - prints hash table
 * @ht: pointer to hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	unsigned long int count = 0;

	if (!ht)
		puts("");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (count > 0)
					printf(", ");
				print_node(ht->array[i]);
				count++;
				while (ht->array[i]->next != NULL)
				{
					printf(", ");
					print_node(ht->array[i]->next);
					ht->array[i] = ht->array[i]->next;
				}
			}
		}
		printf("}");
	}
	printf("\n");
}
