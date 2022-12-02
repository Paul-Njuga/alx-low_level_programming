#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: linked list head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned long node = 0; /* Count for node */

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
