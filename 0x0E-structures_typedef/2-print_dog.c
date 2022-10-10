#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - print dog struct
 * init_dog - dog to be printed
 * @d: The dog to be initialized.
 */
void print_dog(struct dog *d)
{
if (d != 0)
{
if (d->name == 0)
printf("Name: (nul)\n");
else
printf("Name: %s\n", d->name);
if (d->age == 0)
printf("Age: (nil)\n");
else
printf("Age: %f\n", d->age);
if (d->owner == 0)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
return;
}
