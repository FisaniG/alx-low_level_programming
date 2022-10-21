#include "lists.h"
/**
 * print_list - prints list
 *
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t view;

view = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[%u] %s\n", 0, "(nil)");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
view++;
h = h->next;
}
return (view);
}
