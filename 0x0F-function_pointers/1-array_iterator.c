#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - execute given function
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int x;
if (array == NULL || size == 0 || action == NULL)
return;
for (x = 0; x < (int)size; x++)
action(array[x]);
}
