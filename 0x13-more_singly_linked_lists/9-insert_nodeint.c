#include "lists.h"

/**
 * insert_nodeint_at_index - inser a new node at a given position
 * @head: pointer to first node
 * @idx: list index
 * @n: value
 * Return: address of new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	for (i = 0; temp != NULL && i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
