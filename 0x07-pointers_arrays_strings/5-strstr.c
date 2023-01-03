#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the substring to search for
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;

	while (needle[s] != '\0')
		b++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
				break;
		}
		if (a != b)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
