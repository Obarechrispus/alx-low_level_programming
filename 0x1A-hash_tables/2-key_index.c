#include "hash_tables.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_v;

	hash_v = hash_djb2(key);
	return (hash_v % size);
}
