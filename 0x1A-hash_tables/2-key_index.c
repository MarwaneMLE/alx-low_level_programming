#include "hash_tables.h"


/**
 * key_index - gives the index at whitch to store a key in a hash table.
 * @key: the key string to be hashed
 * @size: the size of the array of nodes
 *
 * Return: the index at which the key & value, -1 on failure
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate the hash value using the hash_djb2 function  */
	hash_value = hash_djb2(key);

	/*Calculate the index by taking the remainder of hash value and array size*/
	return (hash_value % size);
}
