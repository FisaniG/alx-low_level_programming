# include <stdio.h>

/**
 * main - check code
 * program to print numbers
 * Return: 0
 */

int main(void)
{
int a;

for (a = 1; a <= 100; a++)
{
if (a % 3 == 0)
{
printf("Fizz\t");
}
else if (a % 5 == 0)
{
printf("Buzz\t");
}
else if (a % 15 == 0)
{
printf("FizzBuzz\t");
}
else
{
printf("%d\t", a);
}
}
 
printf("\n");

return (0);
}
