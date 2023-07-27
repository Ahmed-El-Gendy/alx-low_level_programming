#include "main.h"

/**
 * *cap_string - make all first characters uppercase
 * @a: pointer
 * Return: pointer
*/

char *cap_string(char *a)
{
	int i, j, b;
	char aa[] = ",\t;\n; .!?\"(){}";

	for (i = 0; a[i] != '\0' ; i++)
	{
		b = 0;
		for (j = 0; aa[j] != '\0'; j++)
		{
			if (a[i - 1] == aa[j])
			{
				b = 1;
				break;
			}
		}
		if ((b || i == 0) && a[i] <= 'z' && a[i] >= 'a')
		{
			b = 0;
			a[i] -= 32;
		}
	}
	return (a);
}
