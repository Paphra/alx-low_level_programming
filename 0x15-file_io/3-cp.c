#include <stdio.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * fd_f - get file descripter for from
 * @f: file name
 * Return: fd
 */
int fd_f(char *f)
{
	int fd = open(f, O_RDONLY);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f);
		exit(98);
	}
	return (fd);
}

/**
 * fd_t - get file descripter for to
 * @f: file name
 * @ff: file descriptor for from_file
 * Return: fd
 */
int fd_t(char *f, int ff)
{
	int fd = open(f, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		close(ff);
		exit(99);
	}
	return (fd);
}

/**
 * main - a program that copies the content of a file to another
 * @argc: number of arguments
 * @argv: argument ventor
 *
 * Return: 1 success, else
 * - 97 - number of argumenst don match
 * - 98 - file_from does not exit
 * - 99 - write failes
 * - 100 - failes to close the fd
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUF_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = fd_f(argv[1]);
	fd_to = fd_t(argv[2], fd_from);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
