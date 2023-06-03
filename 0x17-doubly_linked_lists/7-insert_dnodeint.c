#include "lists.h"

/**
 * insert_dnodeint_at_index - inser a new node at a given position
 * @h: pointer to first node
 * @idx: list index
 * @n: value
 * Return: address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *previous;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	temp = *h;
	previous = NULL;
	for (i = 0; temp != NULL && i < idx; i++)
	{
		previous = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);

	new->next = temp;
	new->prev = previous;
	temp->prev = new;
	previous->next = new;
	return (new);
}
