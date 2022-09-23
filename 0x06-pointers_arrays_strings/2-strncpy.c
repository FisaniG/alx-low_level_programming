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
char *temp = dest;
while (n--)
{
(*dest++ = *src++);
}

*dest = '\0';
return (temp);
}
