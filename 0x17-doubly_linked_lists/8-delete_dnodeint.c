#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to first node
 * @index: the index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}
	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	free(temp);
	return (1);
}
