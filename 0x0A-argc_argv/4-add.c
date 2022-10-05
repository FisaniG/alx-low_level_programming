#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds argv inputs if its digit
 * @argc: arguement count
 * @argv: array of pointers to CLI arguement
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (isdigit(argv[i][j]) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
