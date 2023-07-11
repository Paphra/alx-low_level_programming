#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get the string length
 * @s: the string
 * Return: the string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len + 1);
}
/**
 * argstostr - concatenates all arguments of the program
 * @ac: the argument count
 * @av: the array of arguments
 *
 * Return: a pointer to the string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int len = 0;
	int c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i]);
	}
	len++;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		int _len = _strlen(av[i]);

		for (j = 0; j < _len; j++)
		{
			if (av[i][j] == '\0')
				str[c] = '\n';
			else
				str[c] = av[i][j];
			if (c < len - 1)
				c++;
		}
	}

	return (str);
}
