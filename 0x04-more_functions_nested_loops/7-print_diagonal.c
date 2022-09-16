#include "main.h"

/**
 * print_diagonal - check number
 * @n : print '\'
 * Return 0
 */
void print_diagonal(int n)
{
int a = 0;
int b;

while (n > 0)
{
b = 0;
while (b < a)
{
_putchar(' ');
b++;
}
_putchar('\\');
a++;
_putchar('\n');
n--;
}

_putchar('\n');
}
