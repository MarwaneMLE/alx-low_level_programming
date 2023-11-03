#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: hash table
 *
 * Return: if ht is not null print hash table and anything if ht is null
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp_node;
	bool first = true; /* check if it's the first entry printed */

	if (ht && ht->array) /* Check if the hash table and its array exist */
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])/*  Check if there's an entry at the index i */
			{
				tmp_node = ht->array[i];
				if (first)
				{
					printf(", '%s': '%s'", tmp_node->key, tmp_node->value);
					first = false;
				}
				else
					printf(", '%s': '%s'", tmp_node->key, tmp_node->value);

				while (tmp_node->next)
				{
					tmp_node = tmp_node->next;
					printf(", '%s': '%s'", tmp_node->key, tmp_node->value);
				}
			}
		}
		printf("}\n");
	}
}
