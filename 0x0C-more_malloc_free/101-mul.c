#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector, array of arguments in string form
 *
 * Return: 0 - success
 * - exit with 98 with error
 */
int main(int argc, char **argv)
{
	char *prod;

	if (argc != 3 || _digits(argv[1]) == 0 || _digits(argv[2]) == 0)
	{
		_puts("Error\n");
		exit(98);
	}

	prod = _mul(argv[1], argv[2]);

	_puts(prod);
	_putchar('\n');

	return (0);
}

/**
 * _puts - print string
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * _digits - check whether a string only contains digits
 * @str: the string
 * Return: 1 - only digits
 * - 0 - with alphas
 */
int _digits(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _sln - string length
 * @s: the string
 * Return: string length
 */
int _sln(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}

/**
 * _mul - multiply
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to product string
 */
char *_mul(char *s1, char *s2)
{
	int ls1, ls2, lres;
	int *result;
	char *prod;
	int i, j, k, nn0i;

	ls1 = _sln(s1);
	ls2 = _sln(s2);
	lres = ls1 + ls2;

	result = (int *) calloc(lres, sizeof(int));
	for (i = ls1 - 1; i >= 0; i--)
	{
		for (j = ls2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
			result[i + j] += result[i + j + 1] / 10;
			result[i + j + 1] %= 10;
		}
	}

	nn0i = 0;
	while (nn0i < lres && result[nn0i] == 0)
		nn0i++;
	prod = (char *) malloc(sizeof(char) * (lres - nn0i + 1));

	k = 0;
	for (i = nn0i; i < lres; i++)
		prod[k++] = result[i] + '0';
	prod[k] = '\0';
	free(result);

	return (prod);
}
