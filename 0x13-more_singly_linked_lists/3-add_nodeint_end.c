#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - a nod3 that addes at the end
* @head: point3r
* @n: point3r
* Return: numb3r
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *x;
listint_t *y = *head;
x = malloc(sizeof(listint_t));
if (!x)
return (NULL);
x->n = n;
x->next = NULL;
if (*head == NULL)
{
*head = x;
return (x);
}
while (y->next)
y = y->next;
y->next = x;
return (y);
}
