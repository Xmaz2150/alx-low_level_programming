#include "hash_tables.h"

/**
 * hash_table_set - inserts new key and corresponding val
 * @ht: Input, hash table
 * @key: Input, key
 * @value: Input, val
 *
 * Return: status (1) Success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	idx = key_index((unsigned const char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = new_node;
	else
		ht->array[idx]->next = new_node;
	return (1);
}
