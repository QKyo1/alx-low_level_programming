#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index - a functionm
* @head: pointer to the head
* @index: pointer3
* Return: numb33r
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int k = 0;
listint_t *y = head;
while (y && k < index)
{
y = y->next;
k++;
}
return (y ? y : NULL);
}
