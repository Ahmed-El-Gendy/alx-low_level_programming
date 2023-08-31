#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert from binary to decimal
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	unsigned int i, sum = 0, size = 0, pow = 1;

	char *a = b;

	while (a[size] != '\0')
		size++;
	for (i = size - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			sum += pow;
		}
		pow *= 2;
	}
	return (sum);

}
