#include "main.h"

/**
 * print alphabets - in lower cases 
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
