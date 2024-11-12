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
		hash_node_t *bucket = ht->array[i];

		if (bucket == NULL)
			free(bucket);
		else
		{
			while (bucket != NULL)
			{
				hash_node_t *temp = bucket;

				free(temp->key);
				free(temp->value);

				bucket = bucket->next;
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
