#include <stdio.h>

/**
 * main - print 1 to 100, FizzBuzz programm
 * Description: 
 * - for the multiples of 3 - Fizz
 * - for the multiples of 5 - Buzz
 * - for multiples of both 3 and 5 - FizzBuzz
 * Return: 0 - for success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%s", "FizzBuzz");
		else if (i % 3 == 0)
			printf("%s", "Fizz");
		else if (i % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", i);
		if (i < 100)
			putchar(' ');
		else
			putchar('\n');
	}
	return (0);
}
