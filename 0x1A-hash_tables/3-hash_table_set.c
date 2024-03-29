#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *item;
	unsigned long int index = 0;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = strdup(value);
			return (1);
		}
		item = item->next;
	}
	new_item = malloc(sizeof(hash_node_t));
	if (new_item == NULL)
	{
		return (0);
	}
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = ht->array[index];
	ht->array[index] = new_item;
	return (1);
}
