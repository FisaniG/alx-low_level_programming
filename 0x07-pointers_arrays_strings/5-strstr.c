
#include "main.h"

/**
 * *_strstr - point to substring
 * @haystack: string
 * @needle: substring
 * Return: char string
 */
char *_strstr(char *haystack, char *needle)
{
const char *a = haystack;
const char *b = needle;

for (; *haystack; haystack++)
{
if (*haystack != *b)
{
continue;
}
a = haystack;
for ( ; ;)
{
if (!*b)
{
return ((char *)haystack);
}

if (*a++ != *b++)
{
break;
}
}
b = needle;
}
return (0);
}
