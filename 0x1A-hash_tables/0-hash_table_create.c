#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of array
 * Return: pointer to new hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned int i;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	new->array = malloc(new->size * sizeof(hash_node_t *));
	if (new->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < new->size; i++)
	{
		new->array[i] = NULL;
	}
	return (new);
}
