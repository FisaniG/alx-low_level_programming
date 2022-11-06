#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, c, d, sum;

	sum = 0;
	a = 0;
	b = 1;

	for (c = 0; c < 50; c++)
	{
		d = a + b;
		a = b;
		b = d;
		if (d % 2 == 0 && d < 4000000)
		{
			sum += d;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

