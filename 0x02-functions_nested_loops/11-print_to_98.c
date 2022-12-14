#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all natural numbers upto 98
 * @n: The number to begin counting from
 *
*/
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
