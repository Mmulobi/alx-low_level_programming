#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: integer to be swapped
 * @b: integer 2 to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int dmx;

	dmx = *a;
	*a = *b;
	*b = dmx;
}
