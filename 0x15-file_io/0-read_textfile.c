#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: pointer to the file
 * @letters: the numper of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd, re, wr;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	re = read(fd, buf, letters);
	if (re == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, re);
	if (wr == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	if (wr == re)
	{
		return (wr);
	}
	else
		return (0);
}
