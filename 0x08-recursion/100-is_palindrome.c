#include "main.h"

int check_palindrome(char *s);

/**
 * is_palindrome - returns if astring is palindrome
 * @S: the string value that is to be checked
 *
 * Return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s);
}

/**
 * check_palindrome - checks if a string is palindrome
 * @s: the string to be checked
 * 
 * Return: integer value
 */
int check_palindrome(char *s)
{
int b = _strlen_recursion(s) - 1;

if (*s == s[b])
{
s++;
b--;
}
else
{
return (0);
}

return (1);
}

/**
 * strlen_recursion - get the length of a string
 * @s: the string to get the length
 *
 * Return: the length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
