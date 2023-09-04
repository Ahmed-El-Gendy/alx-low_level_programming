#include "main.h"

/**
 * _strlen - compute the length of string
 * @str: the string
 * Return: the length of str
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		len++;

	return (len);
}

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: the data to write
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wr, fd;

	wr = 0;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		
	{
		return (-1);
	}

	if (text_content)
	{
		wr = write(fd, text_content, _strlen(text_content));
	}

	close(fd);

	if (wr == -1)
		return (-1);
	else
		return (1);
}
