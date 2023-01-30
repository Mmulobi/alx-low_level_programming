#include "lists.h"
/**
 * print_list - function that prints all elements
 * @h: list to pointer argument
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int size = 0;
	char *s = NULL;
	unsigned int length = 0;
	const list_t *iter = NULL;

	if (h == NULL)
		return (0);
	iter = h;
	while (iter != NULL)
	{
		s = iter->str;
		length = iter->len;
		if (s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", length, s);
		size++;
		iter = iter->next;
	}
	return (size);
}
