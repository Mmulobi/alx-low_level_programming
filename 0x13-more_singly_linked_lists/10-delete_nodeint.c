#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node of index
 * @head: pointer to head of the listint
 * @index: index of the list
 *
 * Return: 1 if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp_node = *head;
	listint_t *aux = *head;
	unsigned int num = 0;

	if (*head == NULL)
		return (-1);
	while (tmp_node != NULL && num < index)
	{
		aux = tmp_node;
		tmp_node = tmp_node->next;
		num++;
	}
	if (num != index)
		return (-1);

	if (aux == tmp_node)
	{
		aux = aux->next;
		*head = aux;
	}
	else
	{
		tmp_node = aux->next;
		aux->next = tmp_node->next;
	}
	free(tmp_node);
	return (1);
}
