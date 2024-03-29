#include "main.h"

/**
 * *_strncpy - copy string
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
