#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int argument
 * @max: int argument
 *
 * Return: int array
 */
int *array_range(int min, int max)
{
	int b = 0, *p = NULL, size = (max + 1) - min;

	if (min > max)
		return (NULL);

	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		*(p + b) = min++;

	return (p);
}
