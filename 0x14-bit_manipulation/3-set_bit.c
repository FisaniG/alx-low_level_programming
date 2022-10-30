#include "main.h"
/**
 * set_bit - set bit at given index
 *
 * @n: value to be set
 *
 * @index: index position of a bit
 *
 * Return: interger
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	*n |= num;
	return (1);
}

