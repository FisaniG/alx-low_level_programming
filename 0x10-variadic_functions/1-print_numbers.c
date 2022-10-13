#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i, num;
num = va_arg(ap, int);
va_start(ap, n);
for (i = 0; i < n; i++)
{
printf("%d", num);
if (separator && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
