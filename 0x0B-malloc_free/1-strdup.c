#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a new copy
 * @str: pointer to string
 * Return: NULL if empty or pointer to array
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *ar;

	while (str[i] != '\0')
	{
		i++;
	}

	if (!str)
	{
		return (NULL);
	}
	i++;

	ar = malloc(i * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		ar[j] = str[j];
	}
	return (ar);

}
