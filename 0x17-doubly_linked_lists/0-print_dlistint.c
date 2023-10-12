#include "lists.h"
/**
 * print_dlistint - print list
 * @h: head
 * Return: numper of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int cnt;

	cnt = 0;
	while (h)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}
	return (cnt);
}
