#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to number 98
 *@n: interger input
 * Return: 0
 */
void print_to_98(int n)
{
while (n < 98)
{
printf("%d, ", n);
n++;
}
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("98");
printf("\n");
}
