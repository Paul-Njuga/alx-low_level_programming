#include "lists.h"

/**
 * add_nodeint_end - adds a new node,
 * at the end of a listint_t list
 * @head: linked list head
 * @n: node data
 *
 * Return: address of the new element (Success),
 * Null (Failure)
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	listint_t *last = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	/* If list empty, head = new */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse till last node */
	if (last->next != NULL)
		last = last->next;

	/* Add new to last->next */
	last->next = new;
	return (new);
}
