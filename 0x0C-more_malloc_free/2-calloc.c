#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: num of elements
 * @size: num of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = ; i < (nmemb * size); i++)
	{
		p[i] = 0;
	}
	return (p);
}
