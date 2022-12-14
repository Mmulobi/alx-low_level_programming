#include "main.h"
/**
 * main - print alphabet - prints alphabet in lowecase, followed by a new line.
 *
 * Return: 0
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

	return (0);
}
