#include "main.h"

/**
 * more_numbers - print more numbers 0 to 14
 * Description: Print the numbers 0 to 14 - 10 times
 * Return: void
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
				_putchar('1');

			_putchar('0' + (num % 10));
			num++;
		}

		_putchar('\n');
	}

}
