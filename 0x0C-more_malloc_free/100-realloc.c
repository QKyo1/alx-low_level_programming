#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _realloc - re-allocates a chunk of memory
 * @ptr: a pointer to the memory to be re-allocated
 * @old_size: old size
 * @new_size: new size
 * Return: a value of type void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a;
char *b;
unsigned int x;
if (old_size == new_size)
return (ptr);
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
if (!ptr)
return (malloc(new_size));
a = malloc(new_size);
if(!a)
return (NULL);
b = ptr;
if (new_size < old_size)
{
for (x = 0; x < new_size; x++)
a[x] = b[x];
}
if (new_size > old_size)
{
for (x = 0; x < old_size; x++)
a[x] = b[x];
}
free(ptr);
return (a);
}
