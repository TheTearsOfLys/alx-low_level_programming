#include "main.h"

/**
 * _isalpha - check for alphabet characters, lowercase or uppercase
 * @c: input
 * Return: 1 if alphabet, 0 if not
 */

int _isalpha.c(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
