#include "main.h"

/**
 * times_table - prints table of 9 times
 * Return 0
 */
void times_table(void)
{
int a = 0;
int b;
int prod;

while (a < 10)
{
for (b = 0; b < 10; b++)
{
prod = a * b;
while (prod > 9)
{
_putchar(prod / 10 + '0');
_putchar(prod % 10 + '0');
}
_putchar(prod + '0');

if (b < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');

a++;
}
}