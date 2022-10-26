#include "lists.h"

/**
 * print_listint - print listint
 *
 * @h: singly linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int a;

	a = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
