#include "main.h"
/**
 * print_number - print out an interger
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int neg;

	if (n < 0)
	{
		neg = -n;
		_putchar('-');
	}
	else
	{
		neg = n;
	}
	if (neg / 10)
	{
		print_number(neg / 10);
	}

	_putchar((neg % 10) + '0');
}
