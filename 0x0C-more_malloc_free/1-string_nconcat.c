#include "main.h"

/**
 * *string_nconcat - join string together upto n
 * @s2: pointer to string2
 * @s1: pointer to string1
 * @n: number of char to be added
 * Return: char array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *dest;
unsigned int i, j;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (i = 0; s1[i]; i++)
{
}
dest = malloc(sizeof(char) * (i + n + 1));
if (dest == 0)
return (0);
for (j = 0; s2[j] != '\0' && j < n; j++)
{
dest[i + j] = s2[j];
}
dest[i + j] = '\0';
return (dest);
}
