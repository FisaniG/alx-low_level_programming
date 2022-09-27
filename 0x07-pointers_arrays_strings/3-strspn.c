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
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (accept[j] == s[i])
{
break;
}

if (!accept[j])
{
break;
}
}
}
return (i);
}
