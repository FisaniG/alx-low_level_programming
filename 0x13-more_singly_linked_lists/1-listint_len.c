#include "lists.h"
/**
 * listint_len - list numbers of nodes
 *
 * @h: singly linked list
 * Return: number of items
 */
size_t listint_len(const listint_t *h)
{
	unsigned int a;

	a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
