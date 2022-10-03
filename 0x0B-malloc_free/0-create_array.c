#include <stdlib.h>
/**
 * *create_array - create an array
 * @c: char array
 * @size: interger size in byte
 * Return: pointer to an array
 **/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size == 0)
{
return (0);
}
p = malloc(sizeof(char) * size);
if (p == 0)
{
return (0);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
