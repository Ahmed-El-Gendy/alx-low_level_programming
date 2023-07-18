#include <stdio.h>
/**
 * main - main
 * Description: fib first 90
 * Return: 0
 */
int main(void)
{
	unsigned long i;
	unsigned long before = 1;
	unsigned long after = 2;
	unsigned long l = 1000000000;
	unsigned long before1;
	unsigned long before2;
	unsigned long after1;
	unsigned long after2;

	printf("%lu", before);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}
	before1 = (before / l);
	before2 = (before % l);
	after1 = (after / l);
	after2 = (after % l);
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", after1 + (after2 / l));
		printf("%lu", after2 % l);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
