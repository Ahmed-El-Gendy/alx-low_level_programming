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

	i = 0;

	while (*s++)
	{
		char *c = accept;

		while (*c++)
		{
			if (*c == *s)
			{
				i++;
				break;
			}
			c++;
		}

	}
	return (i);
}
