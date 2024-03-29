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
	int i = 0, j = 0, k;
	char *ar;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}


	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ar = malloc((i + j + 1) * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		ar[k] = s1[k];
	}
	for (k = i; k < i + j; k++)
	{
		ar[k] = s2[k - i];
	}
	return (ar);

}
