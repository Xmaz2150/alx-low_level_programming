#include "hash_tables.h"

/**
 * hash_table_get - gets corresponding value of:
 * @key: Input, key in:
 * @ht: Input, hash table
 *
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value;
	unsigned int idx;

	if (ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] != NULL)
		value = strdup(ht->array[idx]->value);
	else
		return (NULL);
	return (value);
}
