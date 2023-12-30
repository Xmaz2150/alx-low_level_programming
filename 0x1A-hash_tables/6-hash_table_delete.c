#include "hash_tables.h"

/**
 * hash_table_delete - frees entire has table
 * @ht: Input, hash table to free
 *
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
			free(ht->array[i]);
		else
		{
			if (ht->array[i]->next != NULL)
			{
				free(ht->array[i]->next->key);
				free(ht->array[i]->next->value);
			}
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
		}
	}
	free(ht);
}
