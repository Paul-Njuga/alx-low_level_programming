#include "lists.h"

/**
 * _strlen - calc length of a string
 * @str: string to be calc
 * Return: len of a string
 */

int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

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
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
