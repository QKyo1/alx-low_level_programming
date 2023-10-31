#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees array
 * @grid: grid
 * @height: height
 * Description: frees memory
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
