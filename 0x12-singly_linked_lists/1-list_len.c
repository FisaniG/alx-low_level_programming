#include "lists.h"

/**
 * list_len - count numbers of elements in a list
 * @h: pointer to the linked
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
size_t view = 0;

while (h != NULL)
{
view++;
h = h->next;
}
return (view);
}
