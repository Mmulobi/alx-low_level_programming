#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
