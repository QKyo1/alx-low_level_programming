#include "main.h"

/**
* puts2 - function should print only one character out of two
* starting with the first one
* @str: input
* Return: print
*/

void puts2(char *str)
{
int longi = 0;
int x = 0;
char *y = str;
int z;
while (*y != '\0')
{
y++;
longi++;
}
x = longi - 1;
for (z = 0 ; z <= x ; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
