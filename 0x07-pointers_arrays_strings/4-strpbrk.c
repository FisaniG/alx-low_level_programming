#include "main.h"

/**
 * *_strpbrk - point to substring
 * @s: string
 * @accept: substring
 * Return: char string
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
char *scan;
while ((i = *s++) != 0)
{
for (scan = accept; (j = *scan++) != 0;)
{
if (j == i)
{
return ((char *)s - 1);
}
}
}
return (0);
}
