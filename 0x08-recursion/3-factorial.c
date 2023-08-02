#include "main.h"

/**
 * factorial - function that return the factorial of numper
 * @n : numper
 * Return : fact of numper
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
