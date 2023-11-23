#include <stdio.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of a linked list
* @head: pointer to the first element in the linked list
* Return: the data inside the elements that was deleted,
*/

int pop_listint(listint_t **head)
{
listint_t *y;
int x;
if (!head || !*head)
return (0);
x = (*head)->n;
y = (*head)->next;
free(*head);
*head = y;
return (x);
}
