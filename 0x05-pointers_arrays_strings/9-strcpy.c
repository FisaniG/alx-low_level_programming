#include "main.h"

/**
 * *_strcpy - update string
 * @dest : parameter
 * @src : paramete
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int b;
int i;
for (i = 0; src[i] != 0; ++i)
{
}
for (b = 0; b < i; b++)
{
src[b] = dest[b];
}

dest[b] = '\0';

return (dest);
}
