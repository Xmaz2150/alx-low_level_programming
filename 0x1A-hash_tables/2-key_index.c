#include "hash_tables.h"

/**
 * key_index - returns index of hashed key
 * @key: Input, key
 * @size: Input, size of hash arr
 *
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
