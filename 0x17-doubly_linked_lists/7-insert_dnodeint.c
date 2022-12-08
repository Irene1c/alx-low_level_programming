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
	dlistint_t *new, *temp;
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
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}

	temp = *h;
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next = new;
	temp->next->prev = new;
	return (new);
}
