#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: pointer to head
 * Return: size
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}

	return (a);

}
