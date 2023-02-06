#include "main.h"
/**
 * get_bit - function that returns the value of the bit given
 * @n: number to get bit from
 * @index: index starting from 0 where bit is to get
 *
 * Return: the value of the bit index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int aux = n;

	if (index > (sizeof(n) * 8))
		return (-1);
	return ((aux >> index) & 1);

}
