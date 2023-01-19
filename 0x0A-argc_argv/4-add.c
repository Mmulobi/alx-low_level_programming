#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - prints the sum of args positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int c, sum = 0;
	char *e;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			e = argv[i];

			for (c = 0; c < strlen(e); c++)
			{
				if (e[c] < 48 || e[c] > 57)
				{
					printf("Error\n");
					return (1);

				}
			}

			sum += atoi(e);
			e++;

		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);

}
