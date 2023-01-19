#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: pointer to int
 * @size: integer
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(*(array + 1)))
					return (1);
			}
		}
	return (-1);
}
