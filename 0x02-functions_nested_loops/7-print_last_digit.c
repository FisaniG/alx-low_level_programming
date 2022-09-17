#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @a : interger number
 * Return: interger value
 */

int print_last_digit(int a)
{
int b = a % 10;
if (b < 0)
{
b = b * -1;
}

_putchar(b + '0');


return (b);

}
