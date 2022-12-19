#include "main.h"
/**
 * _strlen - Returns the leghth of a string
 * @s: string to be counted
 *
 * Return: string leghth
 */
int _strlen(char *s)
{
	int b = 0;

	for (; *s != '\0'; s++)
	{
		b++;
	}

	return (b);
}
