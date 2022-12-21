#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int b = 0, c = 0, d = 5;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char p[5] = {'4', '3', '0', '7', '1'};

	while (s[b])
	{
		c = 0;

		while (c < d)
		{
			if (s[b] == l[c] || s[b] - 32 == l[c])
			{
				s[b] = p[c];
			}

			c++;
		}
		b++;
	}

	return (s);
}
