#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set the bit to 0
 * @n: int
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = ((*n) & ~(1 << index));
	return (1);
}
