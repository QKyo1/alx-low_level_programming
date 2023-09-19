#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/

char *_strcpy(char *dest, char *src)
{
int x = 0;
int y = 0;
while (*(src + l) != '\0')
{
y++;
}
for ( ; x < y ; x++)
{
dest[x] = src[x];
}
dest[y] = '\0';
return (dest);
}
