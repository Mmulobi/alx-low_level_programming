#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: The number that is being checked
 *
 * Return: 1 if the character will be a digit and 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
