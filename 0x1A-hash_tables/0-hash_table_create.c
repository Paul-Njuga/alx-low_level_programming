#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 *
 * @size: The size of the array
 * Return: hash_table_t *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **new_array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;

	new_array = calloc(table->size, sizeof(hash_node_t *));
	if (new_array == NULL)
		return (NULL);

	table->array = new_array;

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
