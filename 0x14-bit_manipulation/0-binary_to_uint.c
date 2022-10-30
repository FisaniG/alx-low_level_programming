#include "main.h"

/**
 * binary_to_uint - convert binary to unsiged interger
 * @b: pointer to string
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0;

	if (!b)
		return (0);

	while (b[i] != 0)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num <<= 1;
		num +=  b[i] - '0';
		i++;
	}
	return (num);
}


