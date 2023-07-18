#include <stdio.h>
/**
 * main - main
 * Description: fib
 * Return: 0
 */
int main(void)
{
	long n = 0, m = 1, x;

	for (x = 1; x <= 50; x++)
	{
		long temp = n, tem = m;

		n = m;
		m = temp + tem;
		printf("%lu", m);
		if (x <= 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
