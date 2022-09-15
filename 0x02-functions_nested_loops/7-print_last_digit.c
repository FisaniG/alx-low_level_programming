#include "main.h"

/**
 * print_last_digit(int a) - print last digit of an interger.
 * @a : interger number
 * Return: interger.
 */

int print_last_digit(int a)
{
int b = a % 10;
if (b < 0)
{
b = b *  -1;
_putchar(b + '0');
}

return (b);

}
