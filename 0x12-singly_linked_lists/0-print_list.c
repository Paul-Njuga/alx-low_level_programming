#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t node to print
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long node = 0; /* Count for node */

	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	
		h = h->next;
		node++;
	}
	return (node);
}
