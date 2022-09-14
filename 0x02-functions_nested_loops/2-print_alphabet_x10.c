#include "main.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
char ch;
int count = 10;
while (count > 0)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}

_putchar(10);

count--;
}
