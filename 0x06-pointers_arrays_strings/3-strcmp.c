#include "main.h"

/**
 * *_strcmp - compare strings
 * @s1: string1 pointer
 * @s2: string2 pointer
 * Return: interger number
 */
int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0') && (*s2 != '\0'))
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 - *s2);
}
}
