#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: list of parameters
 *
 */
void print_all(const char * const format, ...)
{
va_list(output);
float flo = va_arg(output, double);
int num = va_arg(output, int);
char *str = va_arg(output, char *);
int i = 0, sep = 0;
va_start(output, format);
while (format && format[i])
{
if (sep)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", num);
break;
case 'f':
printf("%f", flo);
break;
case 'i':
printf("%d", num);
break;
case 's':
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
default:
sep = 0;
i++;
continue;
}
sep = 1;
i++;
}
printf("\n");
va_end(output);
}
