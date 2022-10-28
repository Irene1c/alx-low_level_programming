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

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		if (idx != 0)
		{
			return (NULL);
		}
		else
		{
			new->next = *head;
			new->n = n;
			*head = new;
			return (new);
		}
	}

	temp = *head;
	while (temp)
	{
		if (i == (idx - 1))
		{
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
