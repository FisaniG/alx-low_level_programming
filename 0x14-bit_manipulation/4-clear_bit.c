#include "main.h"
/**
 * clear_bit - set bit to  0
 * @n: interger pointer
 * @index: index of bit to be cleared
 * Return: interger
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index > 63)
		return (-1);
	num = 1 << index;
	*n &= ~num;
	return (1);
}
