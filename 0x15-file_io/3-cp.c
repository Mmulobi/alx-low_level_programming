#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * main - program that copies the content of a file to another file
 * @argv: argument vector
 * @argc: argument counter
 *
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int first_fd, second_fd, aux = 0, len = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	first_fd = open(argv[1], O_RDONLY);
	if (first_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	second_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (second_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		len = read(first_fd, buffer, 1024);
		if (len == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]), exit(98);
		aux = write(second_fd, buffer, len);
		if (aux == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (len == 1024);
	aux = close(first_fd);
	if (aux == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", first_fd), exit(100);
	aux = close(second_fd);
	if (aux == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", second_fd), exit(100);
	return (0);
}
