#include "main.h"

/**
 * is_prime_number - function that return if numper is prime or not
 * @n : the numper
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


/**
 * check_prime - check all number smaller than n if they can divide it
 * @n: int
 * @resp: the num
 * Return: the mod value
 */

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
	{
		return (1);
	}
	else if (n % resp == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, resp + 1));
	}
}
