#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print sum of diagonal matrix
 * @a: pointer to  2dim array
 * @size: interger array size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int j = 0;
int k = 0;

for (i = 0; i < size; i++)
{
j += a[i];
k += a[size - i - 1];
a += size;
}
printf("%d ", j);
printf("%d ", k);
}
