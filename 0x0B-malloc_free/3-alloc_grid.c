#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (height <= 0 || width <= 0)
{
return (0);
}
grid = (int **) malloc(sizeof(int *) * height);
if (grid == 0)
{
return (0);
}
for (i = 0; i < height; i++)
{
grid[i] = (int *) malloc(sizeof(int) * width);
if (grid[i] == 0)
{
free(grid);
for (j = 0; j <= i; j++)
free(grid[j]);
return (0);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
