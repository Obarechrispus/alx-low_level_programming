#include "hash_tables.h"
/**
 *hash_table_create - this is a function that creates a hash table
 *@size: this is the size of the array in the pointer
 *
 *
 *Return: hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = NULL;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL); /*memory allocation failed*/
		/* allocate memrory to arrays of pointer*/
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;

	hash->size = size;

	return (hash);
}
