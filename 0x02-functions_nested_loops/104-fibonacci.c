#include <stdio.h>
/**
 * main - main
 * Description: fib first 90
 * Return: 0
 */
int main(void)
{
	unsigned long n = 0, m = 1, x;

	for (x = 1; x <= 90; x++)
	{
		unsigned long temp = n, tem = m;

		n = m;
		m = temp + tem;
		printf("%ul", m);
		if (x <= 89)
			printf(", ");
	}
	printf("\n");
	return (0);
}
