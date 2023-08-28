#include "lists.h"

/**
 * print_listint - print all elements
 * @h: pointer
 * Return: numper of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
