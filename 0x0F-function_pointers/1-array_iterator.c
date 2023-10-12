#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
* array_iterator - task name
* @array: ww
* @size: ii
* @action: act
* Return - 0
*/

void array_iterator(int *array, size_t size, void (*action)(int));
{
int x;
if (array == NULL || size == 0 || action == NULL)
exit(1);
for  (x = 0; x < (int)size; x++)
action(array[x]);
}
