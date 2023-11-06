#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* new_dog - new dog
* @name: dog nam3
* @age: dog ag3
* @owner: dog own3r
* Return: a valu3
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *a;
if (name == NULL || owner == NULL || age == 0)
return (NULL);
a = malloc(sizeof(dog_t));
if (a == NULL)
return (NULL);
a->name = malloc(sizeof(char) * strlen(name) + 1);
if (a->name == NULL)
{
free(a);
return (NULL);
}
a->owner = malloc(sizeof(char) * strlen(owner) + 1);
if (a->owner == NULL)
{
free(a->name);
free(a);
return (NULL);
}
a->name = strdup(name);
a->owner = strdup(owner);
a->age = age;
return (a);
}
