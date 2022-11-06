#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * close_fd - close a fd
 * @fd1: first fd
 * @fd2: second fd
 * Return: zero
 */
int close_fd(int fd1, int fd2)
{
	int close1;
	int close2;

	close1 = close(fd1);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close2 = close(fd2);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
/**
 * read_write - reads and writes a text file
 * @fd1: file from fd
 * @fd2: file to fd
 * @file_from: file to read from
 * @file_to: file to write to
 * Return: number of bytes read and printed
 */
ssize_t read_write(int fd1, int fd2, char *file_from, char *file_to)
{
	int bytes;
	int count;
	char buf[1024];

	count = read(fd1, buf, 1024);
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	buf[count] = '\0';
	bytes = write(fd2, buf, count);
	if (bytes == -1 || bytes != count)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (count);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: the arguments
 * Return: zero
 */
int main(int argc, char **argv)
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	read_write(fd1, fd2, argv[1], argv[2]);
	close_fd(fd1, fd2);
	return (0);
}
