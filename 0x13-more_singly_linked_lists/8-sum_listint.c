#include "lists.h"

/**
 * sum_listint - sum of all data (n) of a list
 * @head: first node
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i = 0;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum = sum + temp->n;
		i++;
		temp = temp->next;
	}
	return (sum);
}
