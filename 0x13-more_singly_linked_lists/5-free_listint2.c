#include "lists.h"

/**
 * free_listint2 - frees a list
 * *@head: pointer to first node
 * return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *Headrep;
	listint_t *temp;

	if (head != NULL)
	{
		Headrep = *head;
		while (Headrep != NULL)
		{
			temp = Headrep;
			Headrep = Headrep->next;
			free(temp);
		}
		*head = NULL;
	}
}
