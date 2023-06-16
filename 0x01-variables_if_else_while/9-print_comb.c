#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: 0 - success
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
