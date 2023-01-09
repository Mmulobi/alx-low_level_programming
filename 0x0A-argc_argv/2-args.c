#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	while (*argv)
	{
		(void) argc;
		printf("%s\n", *argv);
		argv++;
	}
	return (0);

}
