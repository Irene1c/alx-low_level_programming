#include "lists.h"

/**
 * add_node - adds a new node at beginning of list
 * @head: first node
 * @str: the string
 * Return: address of new element or null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
/**
 * _strlen - length of string
 * @str: the string
 * Return: the length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
