#include <stdio.h>

/**
 * main - Print two digits combinations
 *
 * Return: 0 - success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j += i; j < 10; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i < 9 && j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
