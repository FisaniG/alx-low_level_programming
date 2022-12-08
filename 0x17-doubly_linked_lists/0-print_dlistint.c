#include "lists.h"
/**
 * print_dlistint - prints double linked list
 * @h: double linked list
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
