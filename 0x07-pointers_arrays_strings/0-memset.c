
#include "main.h"

/**
* _memset - filling blocks
* @s: starting address of memory
* @b: the desired value
* @n: the bytes
* Return: changed array
*/

char *_memset(char *s, char b, unsigned int n)
{
int x = 0;
for (; n > 0; x++)
{
s[x] = b;
n--;
}
return (s);
}
