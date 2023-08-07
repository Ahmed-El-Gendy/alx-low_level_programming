#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL if empty or pointer to array
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j;
	char *ar;

	if (!str)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	ar = malloc(i * sizeof(char) * 2);
	if (ar == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i / 2; j++)
	{
		ar[j] = str[j];
	}
	for (j = i / 2; j < i; j++)
	{
		ar[j] = str[j];
	}
	return (ar);

}
