#include "main.h"
/**
 * _strncat - concatenates two string
 * @dest: destination value
 * @src: the limit of the concatenation
 * @n: the limit of concatenation
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, b = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (b < n && src[b])
	{
		dest[dlen] = src[b];
		dlen++;
		b++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
