#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to array
 * @n: number of items
 * Return: interger array
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int k;
int *temp;
temp = a;

for (i = 0; i < n; i++)
{
temp++;
}
for (j = 0; j < i / 2; j++)
{
k = a[j];
a[j] = *temp;
*temp = k;

temp--;
}
}
