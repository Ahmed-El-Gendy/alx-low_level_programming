#include "main.h"

/**
 * _strpbrk - Returns the number of bytes in the initial segment
 * @s: pointer to array of characters
 * @accept : the array
 * Return: pointer to first match
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
