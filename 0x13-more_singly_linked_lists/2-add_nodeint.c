#include <stdio.h>
#include "lists.h"

/**
* add_nodeint - adds a nod3 to the list
* @head: point3r as a head of the nod3
* @n: pointer
* Return: num,bree
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *x;
x = malloc(sizeof(listint_t));
if (!x)
return (NULL);
x->n = n;
x->next = *head;
*head = x;
return (x);
}
