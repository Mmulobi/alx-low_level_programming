#include "main.h"
/**
 * set_bit - function that sets thevalue of bit to 1
 * @n: number to operate
 * @index: index of the bit you want to setstarting from 0
 *
 * Return: 1 if it worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);

}
