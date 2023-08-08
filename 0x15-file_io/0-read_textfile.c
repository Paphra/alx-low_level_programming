#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the file name to be read
 * @letters: the number of letters to be read
 * Return: the number of letters that could be read
 * - 0 - if can not be opened and if file is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t count_read, count_write;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	count_read = read(fd, buffer, letters);
	if (count_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	count_write = write(STDOUT_FILENO, buffer, count_read);
	if (count_write == -1 || count_write != count_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (count_write);
}
