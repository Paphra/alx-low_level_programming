#include "main.h"

/**
 * _sl - get length of the string
 * @s: the string
 * Return: the length
 */
int _sl(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * append_text_to_file - ppends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the content to be appended
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = write(fd, text_content, _sl(text_content));
	close(fd);
	if (len == -1)
		return (-1);
	return (1);
}
