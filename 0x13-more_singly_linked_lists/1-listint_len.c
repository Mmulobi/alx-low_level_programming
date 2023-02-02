#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - function that returns a number of elements in a lists
 * @h: a pointer to a listint element
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;
	const listint_t *aux = h;

	if (aux == NULL)
		return (0);
	while (aux != NULL)
	{
		aux = aux->next;
		num++;
	}
	return (num);
}
