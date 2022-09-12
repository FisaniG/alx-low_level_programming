#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int num;
int dig;

for (num = 48; num <= 56; num++)
{
for (dig = 49; dig <= 57; dig++)
{
if (num < dig)
{
putchar(num);

putchar(dig);

if (num != 56 || dig != 57)
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

