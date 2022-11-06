#include <stdio.h>
/**
 * main - entry point
 * print natural numbers
 * divisable by 3 and 5
 * Return: 0
 */
int main(void)
{
	int i, num = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			num += i;
		}
		i++;
	}
	printf("%d\n", num);
	return (0);
}
