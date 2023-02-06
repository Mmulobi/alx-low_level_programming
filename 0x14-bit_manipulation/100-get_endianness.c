#include "main.h"
/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int num = 0;
	int *a = &num;
	char *p = (void *) a;

	if (p[0] > 1)
		return (1);
	else
		return (0);

}
