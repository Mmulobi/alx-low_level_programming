#include "main.h"
#include <stdlib.h>
/**
 * create_array - program that creates dynamic memory allocation
 * @size: size of an array
 * @c: character
 *
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
		return (NULL);
	k = malloc(sizeof(char) * size);

	if (k == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			k[i] = c;
		return (k);
	}
}
