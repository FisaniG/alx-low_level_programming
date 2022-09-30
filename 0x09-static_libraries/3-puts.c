#include "main.h"

/**
 * _puts - prints out inputs
 * @str : inputs to be printed
 * Return: characters
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
