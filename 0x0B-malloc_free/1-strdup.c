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

	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (NULL);
	}
	char *ar;

	ar = malloc((i + 1) * sizeof(char));
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i]l
	}
	return (ar);

}
