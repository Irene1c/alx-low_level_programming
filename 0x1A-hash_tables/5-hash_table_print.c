#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *item;
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			if (flag)
			{
				printf("'%s': '%s'", item->key, item->value);
				flag = 0;
			}
			else
			{
				printf(", '%s': '%s'", item->key, item->value);
			}
			item = item->next;
		}
	}
	printf("}\n");
}
