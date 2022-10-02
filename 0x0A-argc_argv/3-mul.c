#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -  multiply arguement int values
 * @argc: arguement count
 * @argv: array of pointers to CLI arguement
 * Return: 0
 **/
int main(int argc, char *argv[])
{
int i;
int prod = 1;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
prod *= (atoi(argv[i]));
}
printf("%d\n", prod);
}
else
{
printf("%s\n", "Error");
return (1);
}
return (0);
}
