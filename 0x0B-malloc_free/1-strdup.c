#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: pointer to string
 * Return: char string
 **/
char *_strdup(char *str)
{
char *p;
int i = 0;
char *dup;
if (str == 0)
{
return (0);
}
while (str[i])
{
i++;
}
dup = malloc(i + 1);
if (dup == 0)
{
return (0);
}
p = dup;
while (*str)
{
*p++ = *str++;
}
*p = '\0';
return (dup);
free(dup);
}
