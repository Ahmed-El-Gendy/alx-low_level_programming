#include "main.h"
/**
 * read_textfile - function that reads a text file
 * @filename: pointer to the file
 * @letters: the numper of letters
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	char *buf = malloc(letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	ssize_t re = read(fd, buf, letters);

	if (re == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	ssize_t wr = write(STDOUT_FILENO, buf, re);

	close(fd);
	free(buf);
	if (re == wr)
		return (re);
	else
		return (0);
}
