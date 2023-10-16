#include "main.h"

/**
 * *_memset - function fills the first n bytes to b
 * @s: pointer to array of character
 * @b : the char to change to it
 * @n : the size of change characters
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
