#include "main.h"

/**
 * *leet - encodes a string
 * @a: pointer
 * Return: pointer
*/

char *leet(char *a)
{
	int i, ii;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	for (i = 0 ; a[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (a[i] == s1[ii] || a[i] == s2[ii])
			{
				a[i] = s3[ii];
				break;
			}
		}
	}

	return (a);
}
