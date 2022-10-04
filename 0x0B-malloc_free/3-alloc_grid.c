#include <stdlib.h>
/**
 * **alloc_grid - print array grid
 * @height: array size
 * @width: array size
 * Return: 0
 **/
int **alloc_grid(int width, int height)
{
int **grid;
int h;
int w;
if (height <= 0 || width <= 0)
{
return (0);
}
grid = malloc(sizeof(int *) * height);
if (grid == 0)
{
return (0);
free(grid);
}
for (h = 0; h < height; h++)
{
grid[h] = malloc(sizeof(int) * width);
while (h-- <= 0)
{
free(grid[h]);
}
free(grid);
return (0);
}
for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
{
grid[h][w] = 0;
}
}
return (grid);
free(grid);
}
