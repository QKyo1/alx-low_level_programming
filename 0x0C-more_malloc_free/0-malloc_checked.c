#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - memory allocation
 * @b: int
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
void *c;
c = malloc(b);
if (c == NULL)
exit(98);
return (c);
}
