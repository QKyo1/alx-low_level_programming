#include "lists.h"
#include <stdio.h>

/**
* sum_listint - a functoin to calculate the summ
* @head: pointe3r to the first
* Return: summmm
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *y = head;
while (y)
{
sum += y->n;
y = y->next;
}
return (sum);
}
