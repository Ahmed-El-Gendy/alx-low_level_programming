#include <stdio.h>
#include <math.h>

/**
 * main - largest prime factor
 * Return: 0
 */
int main(void)
{
	int i = 2;
	long m = 612852475143;

	while (m > 0)
	{
		if (m == i)
		{
			break;
		}
		if (m % i == 0)
			m = m / i;
		else
			i++;
	}
	printf("%lu", m);
	putchar('\n');
	return (0);
}
