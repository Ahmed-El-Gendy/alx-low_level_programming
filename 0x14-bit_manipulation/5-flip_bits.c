#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip bits to reach another numper
 * @m: int
 * @n: int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int sum;

	res = (n ^ m);
	for (sum = 0; res > 0; res = (res >> 1))
	{
		if (res & 1)
			sum++;
	}
	return (sum);

}
