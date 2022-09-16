#include "main.h"

/**
 * more_numbers - print numbers 10 times
 * Return 0
 */
void more_numbers(void)
{
int count;
char a;
char b;

count = 10;
while (count > 0)
{
for (a = 0; a <= 14; a++)
{
b = a;
if (a > 9)
{
_putchar('1');
b = a % 10;
}
_putchar('0' + b);
}

_putchar(10);
count--;
}
