#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer to head;
 */

void free_listint2(listint_t **head)
{
	while (head)
	{
		free(head);
		*head = NULL;
	}
}
