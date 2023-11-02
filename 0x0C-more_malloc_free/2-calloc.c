#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocate memory
 * @nmemb: elemnts
 * @size: size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int x = 0;
void *b;
char *a;
if (nmemb == 0 || size == 0)
return (NULL);
b = malloc(size * nmemb);
if (b == NULL)
return (NULL);
a = b;
while (x < nmemb * size)
{
a[x] = 0;
x++;
}
return (b);
}
