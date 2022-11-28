#include "lists.h"

/**
 * list_len - returns the number of,
 * elements in a linked list_t list
 * @h: list_t node to print
 *
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	unsigned long node = 0; /* Count for node */

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
