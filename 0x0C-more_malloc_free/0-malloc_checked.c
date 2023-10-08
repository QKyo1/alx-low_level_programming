#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/*
* *malloc_checked - the task name
* @b - size of the block
* return - 98
*/

void *malloc_checked(unsigned int b)
{
int *x;
x = malloc(b);
if (x == NULL)
exit(98);
return (x);
}
