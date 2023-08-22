#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * op_add - add two numpers
 * @a: int
 * @b: int
 * Return: int
 */

op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numpers
 * @a: int
 * @b: int
 * Return: int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two numpers
 * @a: int
 * @b: int
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two numpers
 * @a: int
 * @b: int
 * Return: int
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - mod two numpers
 * @a: int
 * @b: int
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
