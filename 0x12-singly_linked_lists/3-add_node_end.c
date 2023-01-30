#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that adds a note
 * @head: pointer to a list_t argument
 * @str: char pointer arguyment
 * Return: the head of the lists
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int cont = 0;
	list_t *node = NULL;
	list_t *aux = *head;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	while (str[cont] != '\0')
		cont++;
	node->str = strdup(str);
	node->len = cont;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = node;
	return (*head);
}
