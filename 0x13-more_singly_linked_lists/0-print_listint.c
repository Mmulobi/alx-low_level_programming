#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - function that prints all elements of a listint_t
 * @h: pointer to a listint element
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;
	const listint_t *aux = h;

	if (aux == NULL)
		return (0);
	while (aux != NULL)
	{
		printf("%i\n", aux->n);
		aux = aux->next;
		num++;
	}
	return (num);
}
