#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first node of linked list
 */
void free_list(list_t *head)
{
	list_t *temp; /* Temp node that holds head->next */

	while (head)
	{
		temp = head->next;
		free(head->str); /* Bcs strings are immutable in memory */
		free(head);
		head = temp;
	}
}
