#include "main.h"

/**
*_strlen - returns the length of a string
*@s: input
*Return: number of char in string (int value)
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	return (length);
}
