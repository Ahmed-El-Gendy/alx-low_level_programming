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
	int fd;
	ssize_t re;
	ssize_t wr;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	re = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, re);
	close(fd);
	return (wr);
}
