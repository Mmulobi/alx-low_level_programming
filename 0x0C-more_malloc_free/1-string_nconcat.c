#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: integer
 *
 * Return: pointerrr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (n >= l2)
		n = l2;

	string = malloc(sizeof(char) * (l1 + n + 1));

	if (string == NULL)
		return (NULL);

	for (i = 0, i < l1; i++)
		string[i] = s1[i];

	for (j = 0, j < n; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i] = '\0';

	return (string);
}

