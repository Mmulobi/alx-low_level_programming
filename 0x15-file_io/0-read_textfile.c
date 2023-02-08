#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int _strlen(char *s);

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of file to be read
 * @letters: number of letters to be read and print
 *
 * Return: number of letters it should read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, aux = 0, res = 0;
	char *buffer = NULL;

	if (filename == NULL && *filename == '\0')
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	res = read(fd, buffer, letters);
	if (res == -1)
		return (0);
	close(fd);
	aux = _strlen(buffer);
	res = write(STDOUT_FILENO, buffer, aux);
	free(buffer);
	if (res != aux)
		return (0);
	return (aux);
}

/**
 * _strlen - calculate the length of string
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *(s + a) != 0; a++)
	{
	}
	return (a);
}
