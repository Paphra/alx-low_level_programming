#include "main.h"
#include <stdlib.h>

/**
 * _strlen - char count
 * @s: string to count chars
 * Return: the char count
 */
int _strlen(char *s)
{
	int len = 0;
	char *_sp = s;

	while (*_sp)
	{
		len++;
		_sp++;
		
	}
	return (len);
}

/**
 * strtow - splits a string into words
 * @str: pointer to the string
 *
 * Return: pointer to the 2d array
 */
char **strtow(char *str)
{
	char **arr;
	int i, j;
	int slen = 0;
	int wlen = 0;
	int wstart = 0;
	int wcount = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	slen = _strlen(str);

	arr = (char **)malloc(sizeof(char *) * slen);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < slen; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (wlen > 0)
			{
				int w = wlen + 1;

				arr[wcount] = (char *)malloc(sizeof(char) * w);
				if (arr[wcount] == NULL)
				{
					for (j = 0; j < wcount; j++)
						free(arr[j]);
					free(arr);
					return (NULL);
				}
			
				for (j = 0; j < wlen; j++)
					arr[wcount][j] = str[wstart + j];
				arr[wcount][j] = '\0';

				wcount++;
				wlen = 0;
			}
			wstart = i + 1;
		} else
			wlen++;
	}
	arr[wcount] = NULL;
	return (arr);
}
