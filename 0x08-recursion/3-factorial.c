#include "main.h"

/**
 * factorial - check for factors
 * @n: interger checked
 * Return: 0
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
