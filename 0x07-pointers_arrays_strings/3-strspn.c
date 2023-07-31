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

	while (*s != '\0')
	{
		char *c = accept;

		while (*c != '\0')
		{
			if (*c == *s)
			{
				i++;
				break;
			}
		}

	}
	return (i);
}
