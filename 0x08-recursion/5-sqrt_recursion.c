#include "main.h"

/**
 * helper - helping to make the square root recursion
 * @n: the number
 * @start: start guess
 * @end: ending the game
 * Return: square root
 */
int helper(int n, int start, int end)
{
	int mid, square;

	if (start > end)
		return (-1);
	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
		return (mid);
	else if (square > n)
		return (helper(n, start, mid - 1));
	else
		return (helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - returns the natural root of a number
 * @n: the number
 * Return: the natural square root, else -1 if no natural sqaure root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (helper(n, 0, n));
}
