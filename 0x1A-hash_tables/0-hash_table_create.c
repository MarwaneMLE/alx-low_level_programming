#include "hash_tables.h"

/*
 * hash_table_t -  function that creates a hash table.
 * @size: the size of the array (int value)
 * Return: the pointer to the newly created hash table or NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;


	/* Chech if the provied size is valid */
	if (size < 1)
		return (NULL);

	/* Allocate memory for the hash table */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	/* Initialize the size and allocate memory for the array */
	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Initialize each element in the array to NULL */
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
