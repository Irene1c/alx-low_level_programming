#include "hash_tables.h"
/**
* hash_table_delete - Delete the hash table
* @ht: the hash table
* Return: the hash table deleted
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned long int index;

	if (ht == NULL)
	{
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		item = ht->array[index];
		while (item != NULL)
		{
			temp = item;
			item = item->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
