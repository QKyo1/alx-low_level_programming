#include "lists.h"

/**
* reverse_listint - a function to reverse the list
* @head: point3r for the start of the head
* Return: the start of the list
*/

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
