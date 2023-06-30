#include "main.h"

/**
 * infinite_add - add two numbers given in form of strings
 * @n1: first number in string
 * @n2: second number in string
 * @r: buffer where to store the result
 * @size_r: the size of the buffer
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1, l2;
	int i, j, k;
	int c, d;
	
	l1 = 0;
	l2 = 0;
	c = 0;

	while (n1[l1] != '\0')
		l1++;
	while (n2[l2] != '\0')
		l2++;

	if (l1 + l2 >= size_r)
		return (0);

	for (i = l1 - 1, j = l2, k = size_r - 1; i >= 0; i--, j--, k--)
	{
		int d1 = (i >= 0) ? n1[i] - '0' : 0;
		int d2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = d1 + d2 + c;

		c = sum / 10;
		d = sum % 10;

		r[k] = d + '0';
	}

	if (c > 0)
	{
		if (size_r <= 1)
			return (0);
		r[size_r - 2] = c + '0';
		size_r--;
	}

	if (size_r <= l1 + l2 + 1)
	{
		for (i = 0; i <= l1 + l2 - size_r; i++)
			r[i] = r[i + 1];
	}

	r[l1 + l2] = '\0';

	return (r);
}
