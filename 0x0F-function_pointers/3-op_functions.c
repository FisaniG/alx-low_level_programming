#include "function_pointers.h"


/**
 * op_add - add intergers
 * @a: interger
 * @b: interger
 * Return: 0
 */

int op_add(int a, int b);
{
return (a + b);
}

/**
 * op_sub - substrate intergers
 * @a: interger
 * @b: interger
 * Return: 0
 */

int op_sub(int a, int b);
{
return (a - b);
}

/**
 * op_mul - multiply intergers
 * @a: interger
 * @b: interger
 * Return: 0
 */

int op_mul(int a, int b);
{
return (a * b);
}

/**
 * op_div - divide intergers
 * @a: interger
 * @b: interger
 * Return: 0
 */

int op_div(int a, int b);
{
if (a == 0 || b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - gets remainder
 * @a: interger
 * @b: interger
 * Return: 0
 */

int op_mod(int a, int b);
{
if (a == 0 || b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
