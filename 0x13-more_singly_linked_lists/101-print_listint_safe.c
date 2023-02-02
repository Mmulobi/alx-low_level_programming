#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a listint list
 * @head: pointer to the head of listint elemnets
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int num = 0;
	const listint_t *aux = head;

	if (head == NULL)
		return (0);
	while (aux != NULL)
	{
		printf("[%p] %i\n", (void *) aux, aux->n);
		num++;
		if (aux <= aux->next)
		{
			printf("-> [%p] %i\n", (void *) aux->next, aux->next->n);
			break;
		}
		aux = aux->next;
	}
	return (num);
}
