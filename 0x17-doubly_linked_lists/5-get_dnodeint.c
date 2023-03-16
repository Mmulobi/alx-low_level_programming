#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of dlistint_t linked list
 * @head: pointer to head pointer of doubly linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}
