#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: pointer to a head of a listint elememnt
 *
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	int tmp_n = 0;

	if (head == NULL || *head == NULL)
		return (0);
	tmp_n = aux->n;
	*head = aux->next;
	free(aux);
	return (tmp_n);
}
