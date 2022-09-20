#include <stdio.h>
#include "main.h"

/**
 * print_array - print out an array
 * @a : array to be printed
 * @n : size of an array
 * Return : array
 */

void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
if (b > 0)
{
printf(", ");
}
printf("%d", a[b]);
}
printf("\n");
}
