#include "hash_tables.h"

unsigned int valid_key_count(const hash_table_t *ht);

/**
 * hash_table_print - prints:
 * @ht: Input, hash table
 *
 * Return: none
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int j, num_keys, ht_size;

	if (ht == NULL)
		return;
	num_keys = valid_key_count(ht);
	ht_size = ht->size - 1;
	printf("{");
	for (j = 0; j < ht_size; j++)
	{
		if (ht->array[j] != NULL)
		{
			if (num_keys > 1)
			{
				printf("'%s': '%s', ", ht->array[j]->key, ht->array[j]->value);
				num_keys--;
			}
			else
				printf("'%s': '%s'", ht->array[j]->key, ht->array[j]->value);
		}
		else
			continue;
	}
	printf("}\n");
}

/**
 * valid_key_count - returns # of valid keys in:
 * @ht: Input, hash table
 *
 * Return: key count;
 */
unsigned int valid_key_count(const hash_table_t *ht)
{
	unsigned int i, num_keys = 0;

	for (i = 0; i < (ht->size - 1); i++)
	{
		if (ht->array[i] != NULL)
			num_keys++;
		else
			continue;
	}
	return (num_keys);
}
