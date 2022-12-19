#include "main.h"
/**
 * rev_string - reverses a string
 * @s: the string to be changed
 *
 * return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char *d, dmx

	d = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 1; c < b; c++)
	{
		d++;
	}

	for (a = 0; a < (b / 2); a++)
	{
		dmx = s[a];
		s[a] = *d;
		*d = dmx;
		d--;
	}
}
