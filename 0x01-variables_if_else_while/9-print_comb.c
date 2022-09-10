#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int num;

for (num = 48; num <= 57; num++)
{
putchar(num);

if (num != 57)
{
putchar(44);

putchar(32);
}
}

putchar(10);

return (0);
}
