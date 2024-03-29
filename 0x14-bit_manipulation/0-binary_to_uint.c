#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: char pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, 0 if there is one or more chars in string
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (num);
	for (; b[i] != '\0'; i++)
	{}
	for (i--; i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num + ((b[i] - '0') * _pow_recursion(2, j));
	}
	return (num);
}
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent number
 * Return: the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
