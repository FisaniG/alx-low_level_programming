#include "main.h"

/**
 * print_triangle - prints triangle shape
 * @size : number of times '#' printed
 * Return: 0
 */
void print_triangle(int size)
{
int a = 1;
int b;

while (size > 0 && a <= size)
{
b = 0;
while (b < size - 1)
{
_putchar(' ');
b++;
}
while (b < a)
{
_putchar('#');
b++;
}
_putchar('\n');
a++;

if (size < 0)
{
_putchar('\n');
}
}
}
