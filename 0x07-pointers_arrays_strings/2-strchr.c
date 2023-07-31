#include "main.h"

/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: pointer to array of characters
 * @c : the char
 * Return: first occurrence
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
