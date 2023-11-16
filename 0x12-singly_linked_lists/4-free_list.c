#include <stdlib.h>
#include "lists.h"

/**
* free_list - fre3 nodes3
* @head: pointer of head
*/

void free_list(list_t *head)
{
list_t *current = head;
list_t *next;
while (current != NULL)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}
