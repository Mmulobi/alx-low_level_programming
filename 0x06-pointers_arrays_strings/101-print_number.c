#include "main.h"
/**
 * print_number - prints any integer with putchar
 * @n: number to be printed
 *
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	b = n;

	if (b / 10)
		print_number(b / 10);

	_putchar(b % 10 + '0');
}
