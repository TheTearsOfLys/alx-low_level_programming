#include "main.h"

/**
*_strlen - returns the length of a string
*@s: input
*Return: number of char in string (int value)
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0') //while num of char in input string is not
	{ //null terminator
		s++;
		length++; //add 1 for each char in s
	}
	return (length);
}
