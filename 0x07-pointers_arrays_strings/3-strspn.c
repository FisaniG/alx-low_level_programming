#include "main.h"

/**
 * _strspn - point to first occorence of substring
 *@s: string
 *@accept: substring
 * Return:0
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int len = 0;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
len++;
break;
}
}
if (s[i] != accept[j])
{
return (len);
}
}
return (len);
}
