#include "lists.h"
#include <stdio.h>

/**
* free_listint - function to free the m3mory
* @head: pointer
*/

void free_listint(listint_t *head)
{
listint_t *y;
while (head)
{
y = head->next;
free(head);
head = y;
}
}
