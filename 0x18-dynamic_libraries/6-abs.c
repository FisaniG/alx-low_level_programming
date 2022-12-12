#include "main.h"

/**
 * _abs - print absolute number
 * @num: number checked
 * Return: 0
 */
int _abs(int num)
{
int res;
if (num < 0)
{
res = num * -1;
return (res);
}
else
{
res = num;
return (res);
}
}
