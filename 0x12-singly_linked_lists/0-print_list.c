#include "list.h"

/**
 * print_list - print list
 * @h: pointer to head
 * Return: size
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;
	list_t hh = h;

	while (hh->next != NULL)
	{
		if (hh->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", hh->len, hh->str);
		}
		hh = hh->next;
		a++;
	}
	printf("[%u] %s\n", hh->len, hh->str);
	return (a);

}
