#include <stdlib.h>
#include "main.h"

/**
* *malloc_checked - task name
* @b: bytes size
* Return: 98
*/

void *malloc_checked(unsigned int b)
{
void x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
