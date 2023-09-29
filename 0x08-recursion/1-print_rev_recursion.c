#include "main.h"

/**
* _print_rev_recursion - Main Entry
* @l: inpit
* Return : 0
*/

void _print_rev_recursion(char *l)
{
if (*l)
{
_print_rev_recursion(l + 1);
_putchar(*l);
}
}
