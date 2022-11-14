#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to array
 * @n: number of items
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *beg = a;
	int *end;
	int hold = 0;

	end = a + n - 1;
	for (; beg < end; beg++, end--)
	{
		hold = *end;
		*end = *beg;
		*beg = hold;
	}
}
