#include "main.h"

/**
 * *cap_string - make all first characters uppercase
 * @a: pointer
 * Return: pointer
*/

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0' ; i++)
	{
		if ((a[i] <= 'z' && a[i] >= 'a') && (i == 0 || a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '\"' || a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' || a[i - 1] == '}' || a[i - 1] == ' ' || a[i - 1] == '\n' || a[i - 1] == '\t'))
			a[i] -= 32;
	}
	return (a);
}
