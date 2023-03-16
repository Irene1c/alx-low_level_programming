#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: first node
 * @index: node index
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
