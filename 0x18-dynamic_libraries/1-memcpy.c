#include "main.h"

/**
 * *_memcpy - copy memory upto n char
 *@dest: destination string
 *@src: source string
 *@n: number of char
 * Return: char string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *csrc = src;
char *cdest = dest;
if ((cdest != 0) && (csrc != 0))
{
while (n > 0)
{
*(cdest++) = *(csrc++);
--n;
}
}

return (dest);
}
