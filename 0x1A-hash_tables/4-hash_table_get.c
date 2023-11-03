#include "hash_tables.h"
/**
 * hash_table_get - return value with key
 * @ht: hash table
 * @key: the key
 * Return: the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (!ht || !key)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}
	return (NULL);
}
