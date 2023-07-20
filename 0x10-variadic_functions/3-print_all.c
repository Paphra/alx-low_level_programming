#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - pritns anything
 * @format: the format of the args types
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list params;
	char 	c_arg;
	int 	i_arg;
	float 	f_arg;
	char 	*s_arg;
	int i = 0;

	va_start(params, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c_arg = (char)va_arg(params, int);
				printf("%c", c_arg);
				break;
			case 'i':
				i_arg = va_arg(params, int);
				printf("%d", i_arg);
				break;
			case 'f':
				f_arg = (float)va_arg(params, double);
				printf("%f", f_arg);
				break;
			case 's':
				s_arg = va_arg(params, char*);
				if (s_arg == NULL)
					printf("(nil)");
				else
					printf("%s", s_arg);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}

	printf("\n");
}
