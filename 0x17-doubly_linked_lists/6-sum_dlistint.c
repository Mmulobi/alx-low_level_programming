#include "lists.h"

/**
 * sum_dlistint - return sum of all data in a doubly linked list
 * @head: pointer to head pointer of doubly linked list
 * Return: sum, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
