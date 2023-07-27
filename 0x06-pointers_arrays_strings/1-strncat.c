#include "main.h"

/**
 * _strncat - concatenates n bytes of two strings
 * @src:  is the string that will use for the argument
 * @dest: is the string that will use for the argument
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
