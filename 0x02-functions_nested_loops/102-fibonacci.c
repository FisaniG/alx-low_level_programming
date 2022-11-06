#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned int i;
	unsigned long int a, b, next;

	a = 1;
	b = 2;
	next = a + b;

	printf("%ld, %ld, ", a, b); 
	for (i = 3; i <= 50; ++i)
	{
		printf("%ld", next);
		a = b;
		b = next;
		next = a + b;
		if (i < 50)
		{	
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

