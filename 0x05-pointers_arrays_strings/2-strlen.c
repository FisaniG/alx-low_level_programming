#include "main.h"

/**
 * _strlen - prints size of string
 * @s : string to be counted
 * Description : return string length
 * Return : return an integer number
 */
int _strlen(char *s)
{
int a = 0;
while (*s != '\0')
{
a++;
s++;
}
return (a);
}


