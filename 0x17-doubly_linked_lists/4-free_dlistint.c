#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head of a lit
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
