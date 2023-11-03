#include "hash_tables.h"

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: 1 if ok and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *curr;

	if (!ht || !key || !value)
		return (0);
	index = hash_djb2((const unsigned char *)key) % ht->size, curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value), curr->value = strdup(value);
			if (!curr->value)
			{
				return (0);
			}
			return (1);
		}
		curr = curr->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key), free(new);
		return (0);
	}
	new->next = ht->array[index], ht->array[index] = new;
	return (1);
}
