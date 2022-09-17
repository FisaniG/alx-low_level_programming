# include <stdio.h>

/**
 * main - check code
 * program to print numbers
 * Return: 0
 */

int main(void)
{
int a = 1;

while (a <= 100)
{
if (a % 15 == 0)
{
printf("FizzBuzz");
}

else if (a % 3 == 0)
{
printf("Fizz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}

if
(a != 100)
{
putchar(' ');
}
a++;
}

printf("\n");

return (0);
}
