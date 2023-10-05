#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - should i defer
* @grid: inpuoto
* @height: inpoootoo
* Return: 0
*/

void free_grid(int **grid, int height)
{
int k;
for (k = 0; k < height; k++)
{
free(grid[k]);
}
free(grid);
}
