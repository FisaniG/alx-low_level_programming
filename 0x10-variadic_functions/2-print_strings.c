#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: string separator
 * @n: number of arguments
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list(ap);
char *str;
va_start(ap, n);
for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);
if
(str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(ap);
}
