#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: pointer to head of a listint
 * @n: the data  to be stored to the new node
 * @idx: index of the list where the new node is added
 *
 * Return: the head of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node = *head;
	listint_t *aux = *head;
	unsigned int num = 0;

	if (head == NULL)
		return (NULL);
	while (tmp_node != NULL && num < idx)
	{
		aux = tmp_node;
		tmp_node = tmp_node->next;
		num++;
	}
	if (num != idx)
		return (NULL);
	tmp_node = malloc(sizeof(listint_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = n;
	if (idx == 0)
	{
		tmp_node->next = aux;
		*head = tmp_node;
	}
	else
	{
		tmp_node->next = aux->next;
		aux->next = tmp_node;
	}
	return (tmp_node);
}
