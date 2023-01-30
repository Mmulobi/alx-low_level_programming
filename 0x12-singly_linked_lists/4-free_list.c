#include "lists.h"
#include <string.h>
/**
 * free_list - function that frees a list_t list
 * @head: pointer to a list_t pointer argument
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
