#include "main.h"
/**
 * _memset - fill memory with constant byte
 * @s: memory area to be filled
 * @b: constant byte to fill
 * @n: byte of memory area to be filled
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
