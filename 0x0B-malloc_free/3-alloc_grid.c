#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - off
* @width: t
* @height: h
* Return: null
*/

int **alloc_grid(int width, int height)
{
int **oof;
int w, z;
if (width <= 0 || height <= 0)
return (NULL);
oof = malloc(sizeof(int *) * height);
if (oof == NULL)
return (NULL);
for (w = 0; w < height; w++)
{
oof[w] = malloc(sizeof(int) * width);
if (oof[w] == NULL)
{
for (; w >= 0; w--)
free(oof[w]);
free(oof);
return (NULL);
}
}
for (w = 0; w < height; w++)
{
for (z = 0; z < width; z++)
oof[w][z] = 0;
}
return (oof);
}
