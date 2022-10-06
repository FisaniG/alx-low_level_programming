#include "main.h"

/**
 * *malloc_checked - allocate memory
 * @b: size of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
void *str;
str = malloc(b);
if (str == 0)
{
exit(98);
}
return (str);
}
