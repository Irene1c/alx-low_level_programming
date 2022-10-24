#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			return (0);
		}
		else
		{
			i++;
		}
		h = h->next;
	}
	return (i);
}
