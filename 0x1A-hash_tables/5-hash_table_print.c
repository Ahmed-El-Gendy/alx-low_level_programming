#include "hash_tables.h"

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c;
	hash_node_t *n;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		n = ht->array[i];
		while (n)
		{
			if (c % 2 == 0)
				printf(", ");
			printf("'%s': '%s'", n->key, n->value);
			n = n->next;
			c++;
		}
	}
	printf("}\n");
}
