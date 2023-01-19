#include <stdlib.h>
#include "main.h"
/**
 * _strpbrk - searchs a string for any set of bytes
 * @s: the string to be searched
 * @accept: the bytes to search for
 *
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{

			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;

	}
	return (NULL);
}
