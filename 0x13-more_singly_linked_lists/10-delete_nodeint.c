#include "lists.h"

/**
* delete_nodeint_at_index - a function to delete a node
* @head: point33r
* @index: point3r for index
* Return: 1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *y = *head;
listint_t *current = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(y);
return (1);
}
while (i < index - 1)
{
if (!y || !(y->next))
return (-1);
y = y->next;
i++;
}
current = y->next;
y->next = current->next;
free(current);
return (1);
}
