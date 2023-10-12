#include "lists.h"
/**
 * dlistint_len - get len
 * @h: head
 * Return: numper of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt;

	cnt = 0;
	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
