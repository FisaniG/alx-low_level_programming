#include "main.h"

/**
 * _atoi - convert string to interger
 * @s: pointer to an array
 * Return: 0
 */

int _atoi(char *s)
{
int sign = 1;
int i = 0;
unsigned int num = 0;
while (s[i] != '\0')
{
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
num = (num * 10) + (s[i] - '0');
}
else if (num > 0)
{
break;
}
i++;
}

num *= sign;
return (num);
}
