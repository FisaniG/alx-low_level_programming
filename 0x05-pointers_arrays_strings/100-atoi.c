#include "main.h"

/**
 * _atoi - convert string to interger
 * @s: pointer to an array
 * Return: 0
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
while (*s++)
{
if (*s == '-')
{
sign *= -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
}
else if (num > 0)
{
break;
}
}

num *= sign;
return (num);
}
