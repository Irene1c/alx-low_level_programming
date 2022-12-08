#include "lists.h"

/**
 * dlistint_len - returns number of elements in doubly linked list
 * @h: pointer to the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
