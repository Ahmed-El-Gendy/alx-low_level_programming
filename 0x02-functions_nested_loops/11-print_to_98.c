#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - add
 *@a : the first num
 *
 * Return: null
 */

void print_to_98(int a)
{
	if (a > 98)
	{
		while (a < 98)
		{
			printf("%i, ", a);
			a++;
		}
	}
	else
	{
		while (a > 98)
		{
			printf("%i, ", a);
			a--;
		}
	}
	printf("i",98);
	putchar('\n');
}
