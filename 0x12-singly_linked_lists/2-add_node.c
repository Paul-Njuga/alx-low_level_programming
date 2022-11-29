#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the first node
 * @str: string to be duplicated
 *
 * Return: the address of the new element (Success),
 * NULL (Failure)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(*str);
	/* If list is empty head = new */
	if (head == NULL)
		head = new;
	new->next = head;
	head = new;
	return (head);
}
