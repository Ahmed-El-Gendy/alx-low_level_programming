#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert from binary to decimal
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, pow;
	int size;

	if (b == NULL)
		return (0);
	sum = 0;
	pow = 1;
	size = 0;

	while (b[size] != '\0')
		size++;
	for (size = size - 1; size >= 0; size--)
	{
		if (b[size] != '0' && b[size] != '1')
		{
			return (0);
		}
		if (b[size] == '1')
		{
			sum += pow;
		}
		pow *= 2;
	}
	return (sum);

}
