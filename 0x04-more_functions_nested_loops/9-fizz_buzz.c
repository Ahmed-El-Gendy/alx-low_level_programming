#include <stdio.h>
#include "main.h"

/**
 * main - check for a digit
 * @n : number of # size to be printed
 * Return:void
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 99)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
