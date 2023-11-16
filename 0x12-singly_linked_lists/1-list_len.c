#include <stdlib.h>
#include "lists.h"

/**
* list_len - linked lists
* @h: point3r
* Return: numb3r
*/

size_t list_len(const list_t *h)
{
size_t s = 0;
while (h)
{
s++;
h = h->next;
}
return (s);
}
