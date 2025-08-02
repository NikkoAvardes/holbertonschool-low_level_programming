#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		return (NULL);
	}
	return (table);
}

/**
 * free_table - Frees a hash table.
 * @table: The hash table to free.
 *
 * Return: void
 */
void free_table(hash_table_t *table)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	for (i = 0; i < table->size; i++)
	{
		node = table->array[i];
		while (node != NULL)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(table->array);
	free(table);
}
