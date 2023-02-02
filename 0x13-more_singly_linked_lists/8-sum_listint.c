#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all data
 * @head: pointer to a head of listint elememnts
 *
 * Return: sum of all the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *aux = head;
	int num = 0;

	if (head == NULL)
		return (0);
	while (aux != NULL)
	{
		num += aux->n;
		aux = aux->next;
	}
	return (num);
}
