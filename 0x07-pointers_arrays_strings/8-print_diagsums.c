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
int j;
int sum = 0;
int *array = a;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == j)
{
sum = sum + array[i][j];
}
}
}
printf("%d", sum);
}
