#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural sqaure root of a number
 * @n: number to calculate the natural sqaure root
 *
 * Return: the natuaral square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 * @n: number top calculate square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
