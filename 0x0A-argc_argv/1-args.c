#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
