#include <stdio.h>

/**
 * main - prints the fibonacci sequences
 *
 * Description: The first 98 Fibonnaci numbers starting from 1 and 2
 *
 * Return: 0 always success;
 */
int main(void)
{
	unsigned int count;
	unsigned long fib1, fib2;
	unsigned int i;

	count = 98;
	fib1 = 1;
	fib2 = 2;

	printf("%lu, %lu, ", fib1, fib2);

	for (i = 3; i <= count; i++)
	{
		unsigned long nextFib = fib1 + fib2;
		printf("%lu", nextFib);
		fib1 = fib2;
		fib2 = nextFib;

		if (i != count)
			printf(", ");
	}

	printf("\n");
	return (0);
}
