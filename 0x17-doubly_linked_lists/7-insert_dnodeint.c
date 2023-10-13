#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head
 * idx: index
 * n: value
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cnt;
	dlistint_t *new;

	cnt = 1;
	new = NULL;
	if (*h)
	{
		while ((*h)->prev)
			*h = (*h)->prev;
		while (h)
		{
			if (cnt == idx)
			{
				if (!(*h)->next)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = (*h)->next;
						new->prev = (*h);
						(*h)->next->prev = new;
						(*h)->next = new;
					}
				}
				break;
			}
			(*h) = (*h)->next;
			cnt++;
		}
	}
	return (new);
}
