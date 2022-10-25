#include "lists.h"

/**
 * free_list - frees a list
 * @head: first node
 *Return: nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		return;
	}
	temp = head;

	if (temp->next != NULL)
	{
		free_list(temp->next);
	}
	free(temp->str);
	free(temp);
}
