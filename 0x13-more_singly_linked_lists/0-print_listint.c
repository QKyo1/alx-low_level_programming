#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the lists
 * @h: pointer
 * Return: value
 */

size_t print_listint(const listint_*h)
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
