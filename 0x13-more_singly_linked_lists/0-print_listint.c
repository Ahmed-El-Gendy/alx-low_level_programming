#include "lists.h"

/**
 * print_listint - print all elements
 * @h: pointer
 * Return: numper of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *t;

	size_t nodes = 0;

	t = h;
	while (t)
	{
		printf("%d\n", t->n);
		nodes++;
		t = t->next;
	}
	return (nodes);
}
