#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the lists
 * @h: pointer
 * Return: value
 */

size_t print_listint(const listint_*h)
{
size_t num = 0;
while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
