#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - list length
* @h: pointer
* Return: list length
*/

size_t list_len(const list_t *h)
{
if (h == NULL)
return (0);
return (1 + list_len(h->next));
}
