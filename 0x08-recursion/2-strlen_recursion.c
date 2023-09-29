#include "main.h"

/**
* _strlen_recursion - Main Entry
* @w: input
* Return: longit
*/

int _strlen_recursion(char *w)
{
int longit = 0;
if (*w)
{
longit++;
longit += _strlen_recursion(w + 1);
}
return (longit);
}
