#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: the value to be mutiplied
 * @y: the times to mutiply the value
 *
 * Return: the value mutiplied by y times
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
