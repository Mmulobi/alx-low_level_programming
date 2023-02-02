#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node
 * @head: pointer to a head in a listint element
 * @n: value that will contain the node
 *
 * Return: the address of the new elememnt
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp_node = NULL;

	if (head == NULL)
		return (NULL);
	tmp_node = malloc(sizeof(listint_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = n;
	tmp_node->next = *head;
	*head = tmp_node;
	return (*head);
}
