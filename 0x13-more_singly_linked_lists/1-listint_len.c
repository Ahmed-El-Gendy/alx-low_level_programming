#include "lists.h"

/**
 * listint_len - get the numper of elements
 * @h: pointer
 * Return: numper of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
