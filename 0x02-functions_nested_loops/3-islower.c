#include "main.h"

/**
 * _islower - returns 1when it finds lowercase character otherwise it returns 0
 * @c: input
 * Return: 1 for lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
