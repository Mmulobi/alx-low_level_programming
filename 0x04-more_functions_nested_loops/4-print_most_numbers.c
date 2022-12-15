#include "main.h"
/**
 * print_most_numbers - prints the numbers since 0 up to 9
 *
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
	int b = 0;

	for (; b <= 9; b++)
	{
		if (b == 2 || b == 4)
		{
			continue;
		}
		else
		{
			_putchar(b + '0');
		}
	}

	_putchar('\n');
}
