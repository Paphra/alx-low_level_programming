#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a pointer to a newly allocated space in mem
 * @str: string to copy
 *
 * Return: pointer to the allocated space if mem available
 * - NULL - if not
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *_strcp;
	char *cp = str;

	len = 0;

	if (str == NULL)
		return (NULL);
	while (*cp != '\0')
	{
		len++;
		cp++;
	}
	len++;

	_strcp = malloc(sizeof(char) * len);

	if (_strcp != NULL)
	{
		for (i = 0; i < len; i++)
			_strcp[i] = str[i];
	}

	return (_strcp);
}
