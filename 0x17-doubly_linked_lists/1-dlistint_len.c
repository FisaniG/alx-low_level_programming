#include "lists.h"
/**
 * dlistint_len - find length of list
 * @h: head of double linked list
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}

