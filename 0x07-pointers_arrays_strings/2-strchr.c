#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: pointer to array of characters
 * @c : the char
 * Return: first occurrence
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (*s[i]);
		}
	}
	return (0);
}
