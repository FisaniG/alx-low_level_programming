#include "main.h"

/**
 * *_calloc - allocate memory continously
 * @nmemb: memory required
 * @size: size needed
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memsize;
char *item;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (0);
}
memsize = malloc(size * nmemb);
if (memsize == 0)
{
return (0);
}
item = memsize;
for (i = 0; i < size * nmemb; i++)
{
item[i] = '\0';
}
return (memsize);
}
