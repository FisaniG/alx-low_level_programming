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

while (a < n)
{
b = 0;
while (b < a)
{
_putchar(' ');
b++;
}
_putchar('\\');
_putchar('\n');
a++;
}
if (n == 0)
{
_putchar('\n');
}
if (n < 0)
{
_putchar('\n');
}

}
