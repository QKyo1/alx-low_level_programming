#include <stdlib.h>
#include "main.h"

/**
* *_memset - fun
* @s: d
* @b: y
* @n: b
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)

{
unsigned int w;
for (w = 0; w < n; w++)
{
s[w] = b;
}
return (s);
}

/**
* *_calloc - task name
* @nmemb: array
* @size: s
* Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
