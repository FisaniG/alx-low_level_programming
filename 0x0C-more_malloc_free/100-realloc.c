#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *old_ptr;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != 0)
{
free(ptr);
return (0);
}
if (ptr == 0)
{
p = malloc(new_size);
if (p == 0)
{
return (0);
}
return (p);
}
p = malloc(new_size);
if (p == 0)
return (0);
old_ptr = ptr;
for (i = 0; i < new_size && i < old_size; i++)
{
p[i] = old_ptr[i];
}
free(ptr);
return (p);
}
