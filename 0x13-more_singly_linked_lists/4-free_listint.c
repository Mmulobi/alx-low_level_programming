#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the head of a listint list
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
		free_listint(head->next);
	free(head);
}
