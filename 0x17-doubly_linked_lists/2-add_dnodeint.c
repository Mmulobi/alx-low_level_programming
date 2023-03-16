#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head pointer of doubly linked list
 * @n: data to add to new node
 * Return: address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
