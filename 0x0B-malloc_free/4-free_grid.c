#include "main.h"
#include <stdlib.h>
/**
 *free_grid - this program depends on alloc grid cd to free a 2d Array
 *@grid: this represent the the grod to be freed
 *@height: this represent the height of the array
 *Return: it shall return the freed grid
 */
void free_grid(int **grid, int height)
{
int x = 0;
for (; x < height; x++)
{
free(grid[x]);
free(grid);
}
}
