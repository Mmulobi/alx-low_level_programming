#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that mutiplies two arg numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	int b = 0;

	if (argc == 3)
	{
		b = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", b);
		return (0);

	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
