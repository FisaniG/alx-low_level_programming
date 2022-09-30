#include "main.h"

/**
 * _atoi - convert string to interger
 * @s: pointer to an array
 * Return: 0
 */

int _atoi(char *s)
{
int i, res, neg;
short digit;
i = 0;
digit = 0;
res = 1;
neg = 1;
while (s[i] != '\0')
{
if (s[i] == '-')
{
neg *= -1;
}
if (s[i] >= '0' && s[i] <= '9')
{
res *= 10;
res -= (s[i] - '0');
digit = 1;
}
else if (digit == 1)
{
break;
}
i++;
}
res *= neg;
return (res);
}
