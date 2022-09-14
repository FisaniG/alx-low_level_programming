#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
int count;
for (count = 10; count >= 0; count--)
{
_putchar(ch);
}
_putchar(10);
}
}
}
