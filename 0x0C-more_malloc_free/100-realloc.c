#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory using malloc
 * @ptr: pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 *
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);

	}
	if (ptr == NULL)
		return (malloc(sizeof(char) * new_size));

	if (new_size < old_size)
	{
		return (ptr);
	}
	p = malloc(sizeof(char) * new_size);

	if (p == NULL)
		return (NULL);

	fre(ptr);
	return (p);
}
