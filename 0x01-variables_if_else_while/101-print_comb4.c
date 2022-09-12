#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int a;
int b;
int c;

for (a = 48; a < 58; a++)
{
for (b = 49; b < 58; b++)
{
for (c = 50; c < 58; c++)
{
putchar(a);

putchar(b);

putchar(c);


if (c > b && b > a)

{
if (a != 55 || b != 56)
{
putchar(44);

putchar(32);
}
}
}
}
}
putchar(10);

return (0);
}
