#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - unction that creates an array of chars
 * @size: size of array
 * @c: the char
 * Return: NULL if empty or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));
	if (ar == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);

}
