#include "main.h"
/**
 * get_endianness - get endianess
 * Return: 1 0r 0
 */
int get_endianness(void)
{
	unsigned int b;
	char *c;

	b = 1;
	c = (char *) &b;

	return ((int)*c);
}



