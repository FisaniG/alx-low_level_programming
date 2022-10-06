#include "main.h"

/**
 * *array_range - print array
 * @min: interger pointer
 * @max: interger pointer
 * Return: 0
 */
int *array_range(int min, int max)
{
int *array, size, low, i;
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
i = 0;
low = min;
while (i <= max - min)
{
array[i++] = low++;
}
return (array);
}
