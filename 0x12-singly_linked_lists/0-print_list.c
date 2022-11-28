#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t node to print
 * 
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[0] (nil)");

	/* struct node saves struct h's address */
	list_t *node = (list_t *)malloc(sizeof(list_t));
	node = h;

	while (node != NULL)
	{	
		printf("[%u] %s\n", node->len, node->str);
		node = node->next;
	}
	return (node->len);
}