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
	int i = 0;
	char *ar;

	while (str[i] != '\0')
	{
		i++;
	}
	if (str == NULL)
	{
		return (NULL);
	}

	ar = malloc((i + 1) * sizeof(char));
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	return (ar);

}
