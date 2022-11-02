#include "main.h"
/**
 * print_times_table - print time table
 * @n: number to be multipied
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j, prod;

	if (n > 15 || n < 0)
	{
		return;
	}
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod < 10)
			{
				_putchar(prod + '0');
			}
			else
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		i++;
	}
}
