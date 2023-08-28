#include "lists.h"

/**
 * print_listint - print all elements
 * @h: pointer
 * Return: numper of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;
	listint_t *t;

	t = h;
	while (t)
	{
		nodes++;
		printf("%d\n", t->n);
		t = t->next;
	}
	return (nodes);
}
