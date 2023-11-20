#include "lists.h"
#include <stdio.h>

/**
* free_listint2 - a second function for freeing the list
* @head: point3r
*/

void free_listint2(listint_t **head)
{
listint_t *y;
if (head == NULL)
return;
while (*head)
{
y = (*head)->next;
free(*head);
*head = y;
}
*head = NULL;
}
