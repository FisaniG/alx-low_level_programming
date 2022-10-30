#include "main.h"
/**
 * flip_bits - reverse bit order
 * @n: interger
 * @m: interger
 * Return: reversed order
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numbers = 0;
	unsigned long int list = n ^ m;

	while (list > 0)
	{
		numbers++;
		list &= (list - 1);
	}
	return (numbers);
}
