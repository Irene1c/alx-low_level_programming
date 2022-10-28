#include "lists.h"

/**
 * pop_listint - deletes head node and returns head node data
 * @head: pointer to head node
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
