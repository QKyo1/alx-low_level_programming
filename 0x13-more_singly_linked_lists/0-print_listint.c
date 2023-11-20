#include "lists.h"
#include <stdio.h>

/**
* print_listint - a func to print all the lists
* @h: point3er
* Return: numb3r
*/

size_t print_listint(const listint_t *h)
{
size_t x = 0;
while (h)
{
printf("%d\n", h->n);
x++;
h = h->next;
}
return (x);
}