#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatanate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to the allocated memory
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i, k;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + size1))
		size1++;

	while (*(s2 + size2))
		size2++;

	s = malloc((size1 + size2) + 1);

	if (s == NULL)
		return (NULL);

	i = 0;

	while (i < size1)
	{
		*(s + i) = *(s1 + 1);
		i++;
	}

	k = 0;

	while (k <= size2)
	{
		*(s + k + size1) = *(s2 + k);
		k++;
	}

	return (s);
}
