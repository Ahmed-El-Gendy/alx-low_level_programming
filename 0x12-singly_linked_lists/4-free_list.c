#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node to the end of list
 * @head: pointer to head
 * @str: string
 * Return: size
 */

list_t *add_node_end(list_t **head, const char *str)
{
        list_t *h = *head;

        while (h->next)
        {
                h = h->next;
                free(head);
                head = h;
        }
        free(h)
}

