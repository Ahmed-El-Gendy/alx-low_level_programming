#include <stdio.h>
#include "lists.h"

/**
 * list_len - print length
 * @h: pointer to head
 * Return: size
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}

	return (a);

}
