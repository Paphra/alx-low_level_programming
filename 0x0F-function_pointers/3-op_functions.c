/**
 * op_add - sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of the two
 */
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;
	return (dif);
}

/**
 * op_mul - multiplication of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of the two
 */
int op_mul(int a, int b)
{
	int prod;

	prod = a * b;
	return (prod);
}

/**
 * op_div - division of two integers
 * @a: first integer
 * @b: second integer
 * Return: division of the two
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: remainder after dision
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
