#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
int num;
char ch;

for (num = 48; num <= 57; num++)
{
putchar(num);
}

for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}

putchar(10);

return (0);
}
