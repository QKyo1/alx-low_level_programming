#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - adds a nod3
* @head: hhead
* @str: string
* Return: value
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *ppw;
ppw = malloc(sizeof(list_t));
if (ppw == NULL)
return (NULL);
ppw->str = strdup(str);
ppw->len = strlen(str);
ppw->next = *head;
*head = ppw;
return (ppw);
}
