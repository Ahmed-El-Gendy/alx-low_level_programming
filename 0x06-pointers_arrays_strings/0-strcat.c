#include "main.h"

/**
 * _strcat - a function that prints half of a string, followed by a new line
 * @src:  is the string that will use for the argument of the function
 * @dest: is the string that will use for the argument of the function
 * Return: NULL
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
}
