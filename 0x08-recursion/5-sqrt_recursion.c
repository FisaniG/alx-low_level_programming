#include "main.h"

/**
 * sqrt_check - check for possible square root
 * @g: guessed number
 * @c: number to checked to be square rooted
 * Return: 0
 */
int sqrt_check(int g, int c)
{
if (g * g == c)
{
return (g);
}
if (g * g > c)
{
return (-1);
}
return (sqrt_check(g + 1, c));

}

/**
 * _sqrt_recursion - check for square roots of a number
 * @n: number checked
 * Return: 0
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}

return (sqrt_check(1, n));
}
