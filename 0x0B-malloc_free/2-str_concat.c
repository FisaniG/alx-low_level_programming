#include <stdlib.h>
/**
 * *str_concat - join strings
 * @s2: pointers to string
 * @s1: pointer to string
 * Return: pointer array
 **/
char *str_concat(char *s1, char *s2)
{
char *a;
int len1 = 0;
int len2 = 0;
int s3;
int i = 0;
if (s1 == 0   || s2 == 0)
{
return ("");
}
while (s1[len1])
{
len1++;
}
while (s2[len2])
{
len2++;
}
s3 = len1 + len2 + 1;
a = malloc(s3);
if (a == 0)
{
return (0);
}
while (*s1 != '\0')
{
a[i] = *s1;
s1++;
i++;
}
while (*s2 != '\0')
{
a[i] = *s2;
s2++;
i++;
}
return (a);
free(a);
}
