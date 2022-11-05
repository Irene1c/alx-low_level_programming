#include "main.h"

/**
 * read_textfile - read a text file and print it to stdout
 * @filename: name of file
 * @letters: number of letters to read and print
 * Return: number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int bytes;
	ssize_t count;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
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
	count = read(fd, buf, letters);
	if (count == -1)
	{
		free(buf);
		return (0);
	}
	buf[count] = '\0';
	bytes = write(STDOUT_FILENO, buf, count);
	if (bytes == -1 || bytes != count)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (count);
}
