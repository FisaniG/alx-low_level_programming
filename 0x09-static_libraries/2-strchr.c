#include "main.h"

/**
 * *_strchr - search string
 *@s: source string
 *@c: char to be searched
 * Return: char string
 */
char *_strchr(char *s, char c)
{
char *find = 0;
if (*s != 0)
{
do {
if (*s == c)
{
find = s;
break;
}
} while (*s++);
}
return (find);
}
