#include "main.h"

/**
 *_strcat - joins string together
 * @dest : pointer to destination string
 *@src : pointer to source string
 * Return: string char array
 */
char *_strcat(char *dest, char *src)
{
char* a = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;

}
*dest = '\0';
return (dest);
}
