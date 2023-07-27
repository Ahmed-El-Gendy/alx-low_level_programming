#include "main.h"

/**
 * _strcat - a function that prints half of a string, followed by a new line
 * @src:  is the string that will use for the argument of the function
 * @dest: is the string that will use for the argument of the function
 * n: used integer
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
