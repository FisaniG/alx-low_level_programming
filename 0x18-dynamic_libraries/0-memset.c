#include "main.h"

/**
 * *_memset - copy string of certain n size
 *@s: source string
 *@b:char to be copied
 *@n: number of char to be copied
 * Return: string char
 */

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n > 0)
{
*p = b;
p++;
n--;
}
return (s);
}
