#include <stdio.h>
#include "lists.h"


/**
 * print_list - prints the lists
 * @X: pointer
 * Return: value 
 */

size_t print_list(const list_t *X)
{
size_t s = 0;
 while (X)
{
if (!X->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", X->len, X->str);
X = X->next;
s++;
}
return (s);
}
