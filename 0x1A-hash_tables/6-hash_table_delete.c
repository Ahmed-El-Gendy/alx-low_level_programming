#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *curr, *t;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			curr = ht->array[index];
			while (curr)		
			{
				t = curr;
				curr = curr->next;
				free(t->key);
				free(t->value);
				free(t);
			}
		}
		free(ht->array);
		free(ht);
	}
}
