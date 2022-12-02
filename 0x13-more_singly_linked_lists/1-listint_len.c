#include "lists.h"

/**
 * listint_len - returns the number of,
 * elements in a linked listint_t list
 * @h: linked list head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned long node = 0; /* Count for node */

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
