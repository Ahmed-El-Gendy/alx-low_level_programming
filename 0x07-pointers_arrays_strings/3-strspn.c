#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 * @s: pointer to array of characters
 * @accept : the array
 * Return: num of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *c;

	i = 0;

	while (*s++)
	{
		while (*c++)
		{
			if (*(c - 1) == *(s - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--c))
			break;
		c = accept;
	}
	return (i);
}
