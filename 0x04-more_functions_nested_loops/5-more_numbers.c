#include "main.h"

/**
 *more_numbers - prints 0 - 14.
 *
 *Return: void.
 */

void more_numbers(void)
{
	int num, repetition;

	repetition = 0;
	while (repetition < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num >= 10)
				_putchar('0' + num / 10);
			_putchar('0' + j % 10);
			num++;
		}
		_putchar('\n');
		repetition++;
	}
}
