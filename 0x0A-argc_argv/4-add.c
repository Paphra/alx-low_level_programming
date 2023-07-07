#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of args
 * @argv: args array
 * Return: 0 - success
 * - 1, if any of the args contains chars other than digits
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *s = argv[i];

			while (*s != '\0')
			{
				if (_isdigit(*s) == 0)
				{
					printf("Error\n");
					return (1);
				}
				s++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}

/**
 * _isdigit - checks a char whether it is a digit or not
 * @c: the char
 * Return: 0 - not a digit
 * - 1, is a digit
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
