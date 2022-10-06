#include "main.h"

/**
 * *array_range - print array
 * @min: interger pointer
 * @max: interger pointer
 * Return: 0
 */
int *array_range(int min, int max)
{
int *array, size, i;
if (min > max)
{
return (0);
}
size = max - min + 1;
array = malloc(sizeof(int) * size);
if (array == 0)
{
return (0);
}
for (i = 0; (min + i) <= max; i++)
{
array[i] = min + i;
}
return (array);
}
