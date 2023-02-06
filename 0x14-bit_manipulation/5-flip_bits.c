#include "main.h"
/**
 * flip_bits - function that returns the number of bits to flip
 * @n: number to flip from
 * @m: number to flip to
 *
 * Return: number of flips to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aux1 = n, aux2 = m;
	unsigned int num = 0;

	while (aux1 > 0 || aux2 > 0)
	{
		if ((aux1 & 1) != (aux2 & 1))
			num++;
		aux1 = aux1 >> 1;
		aux2 = aux2 >> 1;
	}
	return (num);

}
