#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of arrays to be printed
 *
 * return: void
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(",");
		}
	}

	printf("\n");
}
