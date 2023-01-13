#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concates two arrays
 * @s1: string one
 * @s2: string two
 * @n: number of integher
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int a = 0, b = 0, i = 0, j = 0, aux = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; *(s1 + a); a++)
	{
	}
	for (b = 0; *(s2 + b); b++)
	{
	}
	if (n >= b)
		n = b;
	p = malloc((a + n + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < a; i++)
	{
		*(p + aux) = *(s1 + i);
		aux++;

	}
	for (j = 0; j < n; j++)
	{
		*(p + aux) = *(s2 + j);
		aux++;

	}
	*(p + aux) = '\0';
	if (p == NULL)
		return (NULL);
	return (p);
}
