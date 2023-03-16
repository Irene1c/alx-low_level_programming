#include "lists.h"

/**
 * free_dlistint - frees a list
 * *@head: first node
 * return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	dlistint_t *current;

	if (head == NULL)
	{
		return;
	}
	current = head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
