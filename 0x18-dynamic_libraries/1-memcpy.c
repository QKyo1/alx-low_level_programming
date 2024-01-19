#include "main.h"

/**
*_memcpy - a function to copy
*@dest: memory location
*@src: memory location
*@n: bytes
* Return: copied memory with n bytes changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int a = 0;
int x = n;
for (; a < x; a++)
{
dest[a] = src[a];
n--;
}
return (dest);
}
