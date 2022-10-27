#include "lists.h"

/**
 * free_listint - frees a list
 * *@head: first node
 * return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	temp = head;
	if (temp->next != NULL)
	{
		free_listint(temp->next);
	}
	free(temp);
}
