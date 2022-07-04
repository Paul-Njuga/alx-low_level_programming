#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: number of hash table buckets to create
 * Return: address of new hash table, or NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int index;

	/*Handle errors*/
	if (size == 0)
		return (NULL);

	/*Allocated memory*/
	ht = malloc(sizeof(hash_table_t));
	/*Handle errors*/
	if (ht == NULL)
		return (NULL);

	/*Allocated memory*/
	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (ht->array == NULL)
		return (NULL);

	ht->size = size;

	for (index = 0; index < size; index++)
		ht->array[index] = NULL;

	return (ht);
}
