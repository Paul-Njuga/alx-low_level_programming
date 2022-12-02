#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head node;
 */

void free_listint(listint_t *head)
{
	listint_t *tmp; /* Tmp node that holds head->next */

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
