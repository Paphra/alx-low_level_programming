#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum coints to make change for an amount of money
 * @argc: args count
 * @argv: args array pointer
 * Return: 0 - success
 * - 1, if more than 1 args are given to the program
 */
int main(int argc, char **argv)
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else if (cents == 1)
		printf("1\n");
	else
		printf("%d\n", get_coins(cents, coins));

	return (0);
}

/**
 * get_coins - get the number of coins recursively
 * @cents: the number of cents
 * @coins: current coins initial coins
 * Return: current coins accumulated
 */
int get_coins(int cents, int coins)
{
	int rem = 0;
	int _coins = coins;

	if (cents == 0)
		return (coins);

	if (cents >= 25)
	{
		rem = cents % 25;
		_coins += cents / 25;
	} else if (cents >= 10)
	{
		rem = cents % 10;
		_coins += cents / 10;
	} else if (cents >= 5)
	{
		rem = cents % 5;
		_coins += cents / 5;
	} else if (cents >= 2)
	{
		rem = cents % 2;
		_coins += cents / 2;
	} else
	{
		rem = cents % 1;
		_coins += cents / 1;
	}

	return (get_coins(rem, _coins));
}
