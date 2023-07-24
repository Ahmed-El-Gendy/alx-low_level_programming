#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s:  is the string that will use for the argument of the function
 * Return: NULL
 */
void rev_string(char *s)
{
	int i;
	int h;
	int k = 0;

	for (i = 0;; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
	}
	h = i / 2;

	while (h--)
	{
		char c;

		c = s[k];
		s[k] = s[i];
		s[i] = c;
		k++;
		i--;
	}
}
