#include "main.h"

/**
 * *_strncpy - copy string
 * @s1: pointer destination
 * @s2: pointer source
 * Return: value difference
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
