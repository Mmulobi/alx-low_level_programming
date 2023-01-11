#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - a function to copy a string on a new allocated memory
 * @str: string to be copied
 *
 * Return: the duplicate string
 */
char *_strdup(char *str)
{
	int length = 0, i = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	p = malloc((length + 1) * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (p);
	}
	while (i < length)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
