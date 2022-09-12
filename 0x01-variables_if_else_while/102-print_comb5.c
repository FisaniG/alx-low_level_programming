#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int a;
int b;

for (a = 0; a <= 99; a++)
{
for (b = 0; b <= 99; b++)
{
if (b > a)
{
putchar((a / 10) + 48)
putchar((a % 10) + 48)
putchar (10);
putchar((b / 10) + 48);
putchar((b % 10) + 48);

if (a != 99 || b != 98)
{
putchar(44);
putchar(32);
}
}
}
}
putchar(10);
return (0);
}

