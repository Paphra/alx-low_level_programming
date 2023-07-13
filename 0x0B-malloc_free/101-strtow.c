#include "main.h"
#include <stdlib.h>

/**
 * _slen - char count
 * @s: string to count chars
 * @spc:whther to count spaces or not
 * Return: the char count
 */
int _slen(char *s, int spc __attribute__((unused)))
{
	char _prev __attribute__((unused));
	int len = 0;
	char *_sp = s;

	while (*_sp != '\0')
	{
		if (spc == 0)
		{
			len++;
			_sp++;
			continue;
		}
		if (_prev == ' ' && *_sp == ' ')
		{
			_sp++;
			continue;
		}
		_prev = *_sp;
		_sp++;
		len++;
	}
	len++;
	return (len);
}

/**
 * _wc - word count
 * @s: the string
 * Return: word count
 */
int _wc(char *s)
{
	char _p;
	int wc = 0;
	char *_s = s;

	while (*_s != '\0')
	{
		if (_p == ' ' && *_s == ' ')
		{
			_s++;
			continue;
		}
		if (*_s == ' ')
		{
			wc++;
		}
		_p = *_s;
		_s++;
	}
	if (_p != ' ')
		wc++;
	return (wc);
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
	int i, j, w;
	int strl = 0, _strl = 0, wlen = 0, wstart = 0, wcount = 0, wc = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	strl = _slen(str, 0);
	_strl = _slen(str, 1);
	wc = _wc(str);
	if (_strl < 3)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * wc);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < strl; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (wlen > 0)
			{
				w = wlen + 1;
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
