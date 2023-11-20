#include "lists.h"
#include <stdio.h>

/**
* listint_len - lenkid lists return3ed
* @h: pointrer to a list
* Return: numb3r
*/

size_t listint_len(const listint_t *h)
{
size_t x = 0;
while (h)
{
x++;
h = h->next;
}
return (x);
}
