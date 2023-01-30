#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning
 * @head: pointer to list_t argument
 * @str: char pointer argument
 * Return: the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int cont = 0;
	list_t *node = NULL;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	while (str[cont] != '\0')
		cont++;
	node->str = strdup(str);
	node->len = cont;
	node->next = *head;
	*head = node;

	return (*head);
}
