#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* add_node_end - appends a new cell at the end of a given list
* @head: points the list head
* @str: new cell's content
* Return: value of type list_t *
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_nod3, *tmp;
new_nod3 = malloc(sizeof(list_t));
if (new_nod3 == NULL)
{
free(new_nod3);
return (NULL);
}
new_nod3->str = strdup(str);
new_nod3->len = strlen(str);
new_nod3->next = NULL;
if (*head == NULL)
{
*head = new_nod3;
}
else
{
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new_nod3;
}
return (new_nod3);
}
