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
	dlistint_t *new, *hh;

	cnt = 1;
	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else if (*h)
	{
		hh = *h;
		while (hh->prev)
			hh = hh->prev;
		while (hh)
		{
			if (cnt == idx)
			{
				if (!hh->next)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = hh->next;
						new->prev = hh;
						hh->next->prev = new;
						hh->next = new;
					}
				}
				break;
			}
			hh = hh->next;
			cnt++;
		}
	}
	return (new);
}
