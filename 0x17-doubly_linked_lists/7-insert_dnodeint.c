#include "lists.h"
/**
 * insert_node - insert node
 * @tmp: temporary head of list
 * @n: integer
 * Return: address of the new node
 */
dlistint_t *insert_node(dlistint_t *tmp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	new->next = tmp;
	new->prev = tmp->prev;
	tmp->prev->next = new;
	tmp->prev = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: hed of list
 * @idx: index of new node
 * @n: integer
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!h)
		return (NULL);
	tmp = *h;
	while ((idx != 0) && (tmp->next))
	{
		idx -= 1;
		tmp = tmp->next;
		if (idx == 0)
			return (insert_node(tmp, n));
	}
	if (idx == 1)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
