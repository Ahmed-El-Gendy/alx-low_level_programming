#include "main.h"

/**
 * _sqrt_recursion - function that return the sqrt of numper
 * @n : the numper
 * Return: sqrt(n)
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{

	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return  (square(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
