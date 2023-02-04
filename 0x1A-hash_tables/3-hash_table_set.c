#include "hash_tables.h"

/**
 * create_item -  Creates the hash_table item
 * 
 * @key: The key
 * @value: Value associated with the key
 * Return: Pointer to the item if success, NULL otherwise
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	if (key == NULL)
		return (NULL);

	item = malloc(sizeof(hash_node_t));
	item->key = (char*) malloc(strlen(key) + 1);
	item->value = (char*) malloc(strlen(value) + 1);
	item->next = NULL;

	if (key != NULL)
		strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * hash_table_set- Adds an element to the hash table
 *
 * @ht: Hash table
 * @key: The key
 * @value: Value associated with the key
 * Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *item = create_item(key, value);
	unsigned int index;
	char *new_val;

	if (ht == NULL || ht->size <= 0 || ht->array == NULL || item == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_val = strdup(value);
			free(tmp->value); /* Since we set it above */
			tmp->value = new_val;
		}
		tmp = tmp->next;
	}
	
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
