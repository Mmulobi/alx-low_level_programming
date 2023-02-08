#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int _strlen(char *s);
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file to append
 * @text_content: string to append
 *
 * Return: 1 0n success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, aux = 0, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
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
 * _strlen - calculates the length of a string
 * @s: char pointer
 *
 * Return: the length of string
 */
int _strlen(char *s)
{
	int a = 0;

	for (a = 0; *(s + a) != 0; a++)
	{
	}
	return (a);
}
