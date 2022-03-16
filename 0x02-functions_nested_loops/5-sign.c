#include "main.h"

/**
 * print_sign - prinyts the sign of an integer
 *@n: input
 * Return: 1 for positive and -1 for negative, 0 for zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
