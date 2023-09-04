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
 * append_text_to_file - append text to the end file
 * @filename: the name
 * @text_content: the data
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wr;
	int fd;

	wr = 0;
	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

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
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
