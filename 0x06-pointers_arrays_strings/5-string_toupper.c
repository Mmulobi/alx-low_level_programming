#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @p: the string will be modified
 *
 * Return: char var
 */
char *string_toupper(char *p)
{
	int b = 0;

	while (p[b])
	{
		if (p[b] >= 97 && p[b] <= 122)
		{
			p[b] -= 32;
		}

		b++;
	}

	return (p);
}
