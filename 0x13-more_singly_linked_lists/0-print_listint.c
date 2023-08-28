#include "lists.h"

/**
 * print_listint - print all elements
 * @h: pointer
 * Return: numper of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *t;

	t = h;
	while (t)
	{
		printf("%d\n", t->n);
		nodes++;
		t = t->next;
	}
	return (nodes);
}
