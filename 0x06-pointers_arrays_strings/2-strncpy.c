#include "main.h"

/**
 * *_strncpy - copy string
 * @dest : destination string
 * @src : source string
 * @n: number of copied items
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i  < n && *(src + i); i++)
{
*(dest + 1) = *(src + 1);
}
for ( ; i < n; i++)
{
*(dest + 1) = '\0';
}
return (dest);
}
