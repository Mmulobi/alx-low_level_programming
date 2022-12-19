#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}

	for (b -= 1; b >= 0; b++)
	{
		_putchar(s[b]);
	}

	_putchar('\n');
}
