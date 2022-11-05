#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string to write
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	bytes = write(fd, text_content, len);
	if (bytes == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
