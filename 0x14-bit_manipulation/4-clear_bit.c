#include "main.h"
/**
 * clear_bit - function that sets a value of a bit to 0
 * @n: number to operate
 * @index: index of the bit you want to set , index starting from 0
 *
 * Return: 1 if it worked and -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);

}
