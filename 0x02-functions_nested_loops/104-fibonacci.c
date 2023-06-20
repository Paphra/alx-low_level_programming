#include <stdio.h>

/**
 * main - prints the fibonacci sequences
 *
 * Description: The first 50 Fibonnaci numbers starting from 1 and 2
 *
 * Return: 0 always success;
 */
int main(void)
{
	int i;
	unsigned int fib1, fib2;

	fib1 = 1;
	fib2 = 2;

	for (i = 2; i < 98; i++)
	{
		printf("%u, %u", fib1, fib2);
		fib1 = fib1 + fib2;
		fib2 = fib1 + fib2;

		if (i < 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
