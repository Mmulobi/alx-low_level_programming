#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: doubly linked list
 * Return: number of nodes in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}

	return (num_nodes);
}
