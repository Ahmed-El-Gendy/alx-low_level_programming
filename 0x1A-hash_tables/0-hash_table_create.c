#include "hash_tables.h"

/**
 * hash_table_create - make hash table
 * @size: size of hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *p;
	unsigned long int i;

	p = malloc(sizeof(hash_table_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->size = size;
	p->array = malloc(sizeof(hash_node_t *) * size);
	if (p->array == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		p->array[i] = NULL;
	return (p);
}
