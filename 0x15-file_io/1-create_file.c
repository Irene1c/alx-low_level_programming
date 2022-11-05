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
	int len;
	int bytes;

	len = _strlen(text_content);
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
	bytes = write(fd, text_content, len);
	if (bytes == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - length of string
 * @s: the string
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
