#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int _strlen(char *s);
/**
 * create_file - function that creates a file
 * @filename: name of file to be cretaed
 * @text_content: string to write file to
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, aux = 0, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen(text_content);
	aux = write(fd, text_content, len);
	if (aux == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

/**
 * _strlen - calculate the length of a string
 * @s: char pointer
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *(s + a) != a++)
	{
	}
	return (a);
}
