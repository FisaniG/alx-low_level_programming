#include "lists.h"

/**
  * *add_nodeint - add node at header
  *
  * @n: int parameter
  * @head: pointer to head node
  *
  * Return: nothing
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode;

	nNode = malloc(sizeof(listint_t));

	if (nNode == NULL)
	{
		return (NULL);
	}

	nNode->n = n;
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}



