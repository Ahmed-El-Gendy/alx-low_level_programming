#include "main.h"

/**
 * *string_toupper - make all character uppercase
 * @a: pointer
 * Return: pointer
*/

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0' ; i++)
	{
		if (a[i] <= 'z' && a[i] >= 'a')
			a[i] -= 32;
	}
	return (a);
}
