#include "main.h"

/**
 * more_numbers - print numbers 10 times
 * Return 0
 */
void more_numbers(void)
{
int count;
int a;

count = 10;
while (count > 0)
{
while (a >= 48 && a <= 62)
{
_putchar(a);
a++;
}
count--;
}
_putchar(10);
}
