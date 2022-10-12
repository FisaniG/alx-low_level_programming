#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
else
{
return;
}
}
