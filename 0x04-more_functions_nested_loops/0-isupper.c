#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 * @b: The number to be checked
 *
 * Return: 1 for uppercase letter or 0 for anything else
 */

int _isupper(int b)
{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}

	return (0);
}
