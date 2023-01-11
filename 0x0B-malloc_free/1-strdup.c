#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function to copy a string on a new allocated memory
 * @str: string to be copied
 *
 * Return: the duplicate string
 */
char *_strdup(char *str)
{
	char *k;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + count))

		count++;

	k = malloc(sizeof(char) * (count + 1));

	if (k == NULL)
		return (NULL);

	i = 0;

	while (i <= count)
	{
		*(k + 1) = *(str + 1);
		i++;
	}

	return (k);
}
