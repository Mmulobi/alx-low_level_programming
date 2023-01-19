#include "function_pointers.h"
/**
 * array_iterator - function that executes a given paramenter
 * @array: pointer to an int
 * @size: size_t
 * @action: pointer to function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
