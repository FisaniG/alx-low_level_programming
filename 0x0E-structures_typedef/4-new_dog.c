#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * new_dog - new dog
 * @owner: dog's owner
 * @age: dog's age
 * @name: dog's name
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;
int j = 0, i = 0, k;
while (name[i] != '\0')
i++;
while (owner[j] != '\0')
j++;
ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
return (NULL);
ptr->name = malloc(i + 1);
if (ptr->name == NULL)
free(ptr);
return (NULL);
for (k = 0; k <= i + 1; k++)
ptr->name[k] = name[k];
ptr->age = age;
ptr->owner = malloc(j + 1);
if (ptr->owner == NULL)
free(ptr->name);
free(ptr);
return (NULL);
for (k = 0; k <= j + 1; k++)
ptr->owner[k] = owner[k];
return (ptr);
}
