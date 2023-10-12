#include<function_pointers.h>
#include<stdio.h>

/**
 * array_iterator - task name
 * @array: ww
 * @size: ii
 * @action: act
 * return - 0
 */

void array_iterator(int *array, size_t size, void (*action)(int));
int main(void)
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
