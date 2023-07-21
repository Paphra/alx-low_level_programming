#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _psep - print separator
 * @flag: flag of 1 or 0
 * Return: nothing
 */
void _psep(int *flag)
{
	if (*flag == 1)
		printf(", ");
	*flag = 1;
}

/**
 * print_all - pritns anything
 * @format: the format of the args types
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list params;
	char	*s_arg;
	const char *_f = format;
	int	flag = 0;

	va_start(params, format);
	while (*_f != '\0')
	{
		switch (*_f)
		{
			case 'c':
				_psep(&flag);
				printf("%c", (char)va_arg(params, int));
				break;
			case 'i':
				_psep(&flag);
				printf("%d", va_arg(params, int));
				break;
			case 'f':
				_psep(&flag);
				printf("%f", (float)va_arg(params, double));
				break;
			case 's':
				_psep(&flag);
				s_arg = va_arg(params, char*);
				if (s_arg == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s_arg);
				break;
			default:
				flag = 0;
				break;
		}
		_f++;
	}
	va_end(params);
	printf("\n");
}
