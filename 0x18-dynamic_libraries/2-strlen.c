#include "main.h"

/**
 * _strlen - count the length og the string
 * @s:  is the string that will use for the argument of the function
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;
	int cnt = 0;

	for (i = 0;; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		cnt++;
	}
	return (cnt);
}
