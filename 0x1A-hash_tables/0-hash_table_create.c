#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the table i.e total content
 * Return: pointer to the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
