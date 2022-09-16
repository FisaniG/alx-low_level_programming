#include "main.h"

/**
 * print_diagonal - check number
 * @n : print '\'
 * Return 0
 */
void print_diagonal(int n)
{
int a = 0;
while (n > 0)
{
while (a < n)
{
_putchar(' ');
a++;
}
n--;
}
_putchar('\n');
}
