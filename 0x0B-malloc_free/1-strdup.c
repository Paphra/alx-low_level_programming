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
	unsigned int i;
	char *_strcp;

	if (str == NULL)
		return (NULL);
	_strcp = malloc(sizeof(char) * sizeof(str));

	if (_strcp != NULL)
	{
		for (i = 0; i < sizeof(str); i++)
			_strcp[i] = str[i];
	}

	return (_strcp);
}
