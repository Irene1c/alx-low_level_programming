#include "main.h"

/**
 * append_text_to_file - append text at end of file
 * @filename: name of file
 * @text_content: string to add at end of file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int bytes;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
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
