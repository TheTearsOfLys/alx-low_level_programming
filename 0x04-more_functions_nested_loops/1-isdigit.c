#include "holberton.h"

/**
 *_isdigit - checks for a digit.
 *@c: input.
 *
 *Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
<<<<<<< HEAD
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else 
=======
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
>>>>>>> 3579bd9bece5ca8a248aa63fdcd5b7aa9ed514e6
	{
		return (0);
	}
}
