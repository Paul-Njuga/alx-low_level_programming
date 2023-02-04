#include "hash_tables.h"

/**
 * hash_table_get - Gives you the index of a key
 *
 * @ht: The hash table
 * @key: The key
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned int index;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL && strcmp(tmp->key, key) == 0)
		return (tmp->value);
	return (NULL);
}
