#include <stdlib.h>

/**
 *free_grid - frees memory
 * @height: colomn number
 * @grid: pointer to array
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
