#include <stdio.h>

/**
 * main - find the largest prime factor of 612852475143
 * Return: 0 - success
 */
int main(void)
{
	unsigned long number;
	unsigned long prime;
	unsigned long large;

	number = 612852475143;

	for (prime = 2; prime <= number; prime++)
	{
		while (number % prime == 0)
		{
			large = prime;
			number = number / prime;
		}
	}
	
	printf("%lu\n", large);

	return (0);
}
