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
while (b < size - a)
{
_putchar(' ');
b++;
}

for (b = 0; b < a; b++)
{
_putchar('#');
}
_putchar('\n');
a++;
}

if (size < 0)
{
_putchar('\n');
}
else if (size == 0)
{
_putchar('\n');
}

}
