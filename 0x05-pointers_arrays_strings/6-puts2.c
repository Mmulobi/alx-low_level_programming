#include "main.h"
/**
 * puts2 - prints other characters of the string
 * @str: the string to be treated
 * return: void
 */
void puts2(char *str)
{
	int a;
	int b = 0

	while (str[b] != '\0')
	{
		b++;
	}

	for (a = 0; a < b; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
