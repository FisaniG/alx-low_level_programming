#include "main.h"

/**
 * _atoi - convert string to int
 * @s: char array checked
 * Return: 0
 */
int _atoi(char *s)
{
int i, num, count, mult, x, neg;
i = 0;
num = 0;
count = 0;
mult = 1;
neg = 1;
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
count++;
if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
{
break;
}
}
i++;
}
for (; count > 1; count--)
{
mult *= 10;
}
for (x = 0; x <= i; x++)
{
if (s[x] == '-')
{
neg *= -1;
}
else if (s[x] <= '9' && s[x] >= '0')
{
num += mult * neg * (s[x] - '0');
mult /= 10;
}
}
return (num);
}
