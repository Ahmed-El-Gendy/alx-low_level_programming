#include "main.h"

/**
 * _memcpy - function copies n bytes from src to dest
 * @dest: pointer to array of characters
 * @src : pointer to array of characters
 * @n : the size of change characters
 * Return: *dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
