#include "main.h"

/**
 * print_square - prints square block of '#'
 * @size : number of times '#' will be printed
 * Return 0
 */

void print_square(int size)
{
int a;
int count = 0;

while (count < size)
{
for (a = 0; a < size; a++)
{
_putchar('#');
}
_putchar('\n');
count++;
}
if (size == 0)
{
_putchar('\n');
}
if (size < 0)
{
_putchar('\n');
}
}
