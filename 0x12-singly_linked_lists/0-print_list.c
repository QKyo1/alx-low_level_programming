#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - lists to be printed
* @h: pointer
* Return: number
*/

size_t print_list(const list_t *h)
{
if (h == NULL)
return (0);
if (h->str == NULL || strlen(h->str) == 0)
{
printf("[%d]", h->len);
printf(" (nil)\n");
}
else
printf("[%u] %s\n", h->len, h->str);
return (1 + print_list(h->next));
}
