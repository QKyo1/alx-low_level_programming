#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - search in array
 * @array: array
 * @cmp: function
 * @size: size
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int x, y;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (x = 0; x < size; x++)
{
y = cmp(array[x]);
if (y == 1)
return (x);
}
return (-1);
}
