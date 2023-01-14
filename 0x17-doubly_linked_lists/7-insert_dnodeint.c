#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at nth position
 * @h: pointer to the first node
 * @idx: position of node
 * @n: data to be inserted
 *
 * Return: address of new node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int i, count = 0;
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (idx > count)
		return (NULL);

	if (idx == 0)
	{
		node = add_dnodeint(h, n);
	}
	else if (idx == count)
	{
		node = add_dnodeint_end(h, n);
	}
	else
	{
		temp = *h;

		for (i = 0; i < idx - 1; i++)
			temp = temp->next;

		node->n = n;
		node->next = temp->next;
		temp->next = node;
		node->prev = temp;
		node->next->prev = node;
	}

	return (node);
}
