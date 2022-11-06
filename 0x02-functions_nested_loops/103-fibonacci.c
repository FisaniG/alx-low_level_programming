#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, c, d, sum;

	a = sum = 0;
	b = 1;

	for (c = 0; c < 50; c++)
	{
		d = a + b;
		a = b;
		b = d;
		if (c % 2 == 0 && c < 4000000)
		{
			sum += c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}

