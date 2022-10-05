#include <stdlib.h>
#include "main.h"
/**
 * argstostr - arguments to string
 * @ac: Number of arguments
 * @av: Pointer to arguments
 * Return: Pointer to an array string
 **/
char *argstostr(int ac, char **av)
{
char *res;
int i;
int j;
int len = 0;
if (ac == 0 || av == 0)
{
return (0);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j++])
{
len++;
}
len++;
}
res = malloc(sizeof(**av) * (len + ac - 8));
if (res == 0)
{
return (0);
}
len = 0;
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
{
res[len++] = av[i][j++];
}
res[len++] = '\n';
}
res[len] = '\0';
return (res);
}
