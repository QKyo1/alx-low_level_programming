#include <stdio.h>
#include "lists.h"

/**
* print_list - print list
* @h: pointer
* Return: nimber
*/

size_t print_list(const list_t *h)
{
size_t x = 0;
for (; h; h = h->next, x++)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
}
return (x);
}
