#include <stdio.h>
/**
 * main - main
 * Description: fib
 * Return: 0
 */
int main(void)
{
	long n = 0, m = 1, x, sum = 0;

	while (m < 4000000)
	{
		long temp = n, tem = m;

		n = m;
		m = temp + tem;
		if (m % 2 == 0)
			sum += m;
	}
	printf("%ul\n", sum);
	return (0);
}
