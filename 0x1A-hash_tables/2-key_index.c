#include "hash_tables.h"

/**
 * key_index - give the index
 * @key: the key
 * @size: the size
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ind = hash_djb2(key) % size;

	return (ind);
}
